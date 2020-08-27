---
layout: post
title:  "Work Products of GSoC 2020"
date:   2020-08-27 20:40:00 +0200
categories: gsoc2020
---

After participating in the Google Summer of Code with [Boost.Geometry][boost-geometry] a second time, I want to present my [project][project] results.

### Project goal

My project's goal was to implement a set of templates that can be used to create adaptive, robust floating-point predicates, particularly geometric predicates. A geometric predicate is a function that takes one or more geometries and returns a boolean or otherwise discrete decision. Examples include tests for the orientation of a given triangle or the test on how a given point is located with respect to a circle given by three other points. More specifically for this project I only consider predicates that can be implemented by computing the sign of some expression involving the coordinates of the input geometries and the operators \*, + and -.

### Problem

The evaluation of such expressions can suffer from overflow for both integer and floating-point coordinates, and from underflow and rounding errors for floating-point coordinates only. Depending on the platform, overflow and underflow with floating-point calculations can be detected through exception flags. This project deals with the issue of rounding errors.

### Solution

Rounding-errors can be avoided, for example, through expansion arithmetics or through multi-precision number types. This project implements the former. Because expansion arithmetics come with a significant performance penalty, it is desirable to first check, whether the floating-point approximation can be proven to be correct by comparing it to an error bound. This error bound depends on the inputs and the structure of the predicate. Error bounds for geometric predicates can be derived through numerical error analysis on the arithmetic expression that is evaluated by the predicate. There are a number of possible approaches to this, depending on tradeoffs between error bound sharpness and computational costs and the availability of a priori bounds for the inputs. We refer to computation stages that attempt to verify the correctness of the sign of approximate evaluations as floating-point filters.

Because the error analysis, the implementation of expansion arithmetics, and the implementation of filters can be elaborate and error-prone, this project provides templates that generate these facilities at compile-time. This project is mainly based on ideas that were published by [Shewchuk][shewchuk] and [Meyer and Pion](https://hal.inria.fr/inria-00344297/en).

### Example

The following example illustrates how to build a multi-stage predicate based on the templates provided by this project.

```cpp
using namespace boost::geometry::detail::generic_robust_predicates;

// the following type represents an arithmetic expression that is equivalent to
// (ax - cx) * (by - cy) - (ay - cy) * (bx - cy), assuming that ax, ay, bx, by,
// cx, and cy are the arguments 1 to 6 respectively, that will later be passed
// to the predicate.
// The sign of this expression represents the orientation of the triangle
// a, b, c. A sign of zero implies collinearity of the given points.
using expression = difference
    <
        product <difference <_1, _5>, difference<_2, _6>>,
        product <difference <_3, _5>, difference<_4, _6>>
    >;

// The first filter tests the floating-point approximation against an error
// bound that is derived from global bounds on the inputs and an error analysis
// based on the forward error analysis presented in the papers linked at
// https://www.cs.cmu.edu/~quake/robust.html
using filter1 = stage_a_static<expression, double>;
// The second filter employs an error bound that is computed in the same way
// as the error bound for the stage A of the orient2d-method presented in the
// paper and implementation that are linked at
// https://www.cs.cmu.edu/~quake/robust.html
using filter2 = stage_a_semi_static<expression,double>;
// The third filter employs an error bound that is derived based on the ideas
// described in https://hal.inria.fr/inria-00344297/en
using filter3 = fpg_semi_static<expression, double>;
// The next filter tests whether the initial subtractions in the expression
// can be performed without round-off for the given inputs, and if so, uses
// simplified computations to compute the exact result using expansion
// arithmetics
using filter4 = stage_b<expression, double>;
// This final stage is exact and evaluates the entire expression using
// expansion arithmetics. It corresponds to the stage D as found in the papers
// and implementation found at https://www.cs.cmu.edu/~quake/robust.html
using exact_stage = stage_d<expression, double>;

using staged_predicate = staged_predicate
    <
        double,
        filter1,
        filter2,
        filter3,
        filter4,
        exact_stage
    >;

// The first stage requires bounds on the inputs. There are six inputs in total
// for the given expression and we provide an upper und lower bound for each.
staged_predicate predicate(10, 10, 10, 10, 10, 10, 0., 0., 0., 0., 0., 0.);

// The following function call with return the orientation of the triangle
// (1, 1), (5, 6), (10, 10).
// Because these coordinates are not particularly degenerate, the staged
// predicate will return a result after the first filter (the one based on a
// global error bound) and no further computations for the later stages will
// be performed.
predicate.apply(1, 1, 5, 6, 10, 10);
```

## Work Products
The entirety of the work product can be found in the [BooostGSoC20/geometry repository][boost-gsoc-develop], specifically in the commits of the following Github comparison: [https://github.com/boostorg/geometry/compare/develop...BoostGSoC20:feature/fpg\_like\_filter](https://github.com/boostorg/geometry/compare/develop...BoostGSoC20:feature/fpg_like_filter)
For reference, here is a full list of the commits that make up the work product:

[c1c75b57c5848b5d3d1171d78a149f8d3572abad](https://github.com/boostorg/geometry/commit/c1c75b57c5848b5d3d1171d78a149f8d3572abad)

[aa2afbc62aa67604c550cc73c3ff1520e0e4e7b5](https://github.com/boostorg/geometry/commit/aa2afbc62aa67604c550cc73c3ff1520e0e4e7b5)

[4da968eed3134feb26368ad051dbc467f2da5ce8](https://github.com/boostorg/geometry/commit/4da968eed3134feb26368ad051dbc467f2da5ce8)

[874e67d07725dddf513f42a671ef45bc86029fa4](https://github.com/boostorg/geometry/commit/874e67d07725dddf513f42a671ef45bc86029fa4)

[0670b68969f3c0434853b946fc2bd8e921e2ef90](https://github.com/boostorg/geometry/commit/0670b68969f3c0434853b946fc2bd8e921e2ef90)

[a13597e48594d753ddb81af0f7856933a4baf118](https://github.com/boostorg/geometry/commit/a13597e48594d753ddb81af0f7856933a4baf118)

[cea68aa98e5b9f30bef317629b9ec96d688c7dcb](https://github.com/boostorg/geometry/commit/cea68aa98e5b9f30bef317629b9ec96d688c7dcb)

For convenience, the following link lead directly to the directories containing the work products:

<https://github.com/BoostGSoC20/geometry/tree/feature/fpg_like_filter/include/boost/geometry/extensions/generic_robust_predicates/strategies/cartesian/detail>

The following links lead to the tests and examples that were written for the GSoC project:

<https://github.com/BoostGSoC20/geometry/tree/feature/fpg_like_filter/extensions/test/generic_robust_predicates>

<https://github.com/BoostGSoC20/geometry/tree/feature/fpg_like_filter/extensions/example/generic_robust_predicates>


[project]: https://summerofcode.withgoogle.com/projects/#4574515276808192
[gsoc-repo]: https://github.com/BoostGSoC20/geometry
[boost-geometry]: https://github.com/boostorg/geometry
[shewchuk]: https://www.cs.cmu.edu/~quake/robust.html
