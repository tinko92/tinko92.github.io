---
layout: post
title:  "Work Products"
date:   2019-09-23 20:15:00 +0200
categories: gsoc2019
---

Close to the end of my [GSoC project][project], it is time to present the product of my work. As a quick reminder, I based my project on [project proposal 3][project3] and [project proposal 4][project4] for [Boost.Geometry][boost-geometry] from the Boost GSoC 2019 Wiki. The goals of my project were to implement
* robust geometric predicates for Delaunay triangulation
* a triangulation data structure
* a triangle data structure
* a Voronoi diagram data structure
* a Delaunay triangulation algorithm for 2D points in a cartesian coordinate system
* uniform point distributions for various types of domains

## Work Product
The entirety of the work product can be found in the [develop branch of the BooostGSoC19/geometry repository][boost-gsoc-develop], specifically in the commits of the following Github comparison: [https://github.com/BoostGSoC19/geometry/compare/5679ccd08fa5bd09c424a6a7878ad0dafc2c8f93...BoostGSoC19:4c1cf99ad9f20d85afe30b170501ab625a15b11b][work-product-comparison].
For reference, here is a full list of the commits that make up the work product:
[0704d7e660f9faa57f4c68eb1bd95cebb921b704](https://github.com/BoostGSoC19/geometry/commit/0704d7e660f9faa57f4c68eb1bd95cebb921b704)
[0c4615575f9b10a4f522cb1096814f20f7a5a8b8](https://github.com/BoostGSoC19/geometry/commit/0c4615575f9b10a4f522cb1096814f20f7a5a8b8)
[57632e189555f1089fc577d78492dae8ccc9c5d4](https://github.com/BoostGSoC19/geometry/commit/57632e189555f1089fc577d78492dae8ccc9c5d4)
[a6bfe950c9e9ce4718abe1543316f91c80e1fe07](https://github.com/BoostGSoC19/geometry/commit/a6bfe950c9e9ce4718abe1543316f91c80e1fe07)
[d906785184d48c84af6625f6960ecfdfc11abacf](https://github.com/BoostGSoC19/geometry/commit/d906785184d48c84af6625f6960ecfdfc11abacf)
[b9a3660f47e8ddf818b28add26695a5b84102e12](https://github.com/BoostGSoC19/geometry/commit/b9a3660f47e8ddf818b28add26695a5b84102e12)
[645f6ed4faf0ce72aba53ff42fcce05d2279c3ef](https://github.com/BoostGSoC19/geometry/commit/645f6ed4faf0ce72aba53ff42fcce05d2279c3ef)
[cff87f3f28ed1088aece0860fa2e5bfc6e347a36](https://github.com/BoostGSoC19/geometry/commit/cff87f3f28ed1088aece0860fa2e5bfc6e347a36)
[d140ddbb7c7f57f67fa5f7a5080651563bec80c7](https://github.com/BoostGSoC19/geometry/commit/d140ddbb7c7f57f67fa5f7a5080651563bec80c7)
[74cad8410731a46c41b556563bbac38bd2095d8d](https://github.com/BoostGSoC19/geometry/commit/74cad8410731a46c41b556563bbac38bd2095d8d)
[1f55c44bc9363e0c8b1b7c4ff1cbfe695d7dbec7](https://github.com/BoostGSoC19/geometry/commit/1f55c44bc9363e0c8b1b7c4ff1cbfe695d7dbec7)
[f150cc1cb84d58458a8e958623d8806d52efb349](https://github.com/BoostGSoC19/geometry/commit/f150cc1cb84d58458a8e958623d8806d52efb349)
[1156767e5a8d1243a682270da17b4fae8784dbae](https://github.com/BoostGSoC19/geometry/commit/1156767e5a8d1243a682270da17b4fae8784dbae)
[4c1cf99ad9f20d85afe30b170501ab625a15b11b](https://github.com/BoostGSoC19/geometry/commit/4c1cf99ad9f20d85afe30b170501ab625a15b11b)

For reference, I will also include a list of the files containing the work product:
[extensions/example/Jamfile.v2](https://github.com/BoostGSoC19/geometry/blob/develop/extensions/example/Jamfile.v2)
[extensions/example/random/random\_example.cpp](https://github.com/BoostGSoC19/geometry/blob/develop/extensions/example/random/random_example.cpp)
[extensions/example/triangulation/Jamfile.v2](https://github.com/BoostGSoC19/geometry/blob/develop/extensions/example/triangulation/Jamfile.v2)
[extensions/example/triangulation/triangulation\_example.cpp](https://github.com/BoostGSoC19/geometry/blob/develop/extensions/example/triangulation/triangulation_example.cpp)
[extensions/test/Jamfile.v2](https://github.com/BoostGSoC19/geometry/blob/develop/extensions/test/Jamfile.v2)
[extensions/test/random/random.cpp](https://github.com/BoostGSoC19/geometry/blob/develop/extensions/test/random/random.cpp)
[extensions/test/triangulation/Jamfile.v2](https://github.com/BoostGSoC19/geometry/blob/develop/extensions/test/triangulation/Jamfile.v2)
[extensions/test/triangulation/in\_circle\_robust.cpp](https://github.com/BoostGSoC19/geometry/blob/develop/extensions/test/triangulation/in_circle_robust.cpp)
[extensions/test/triangulation/side\_robust.cpp](https://github.com/BoostGSoC19/geometry/blob/develop/extensions/test/triangulation/side_robust.cpp)
[extensions/test/triangulation/triangulation.cpp](https://github.com/BoostGSoC19/geometry/blob/develop/extensions/test/triangulation/triangulation.cpp)
[include/boost/geometry/extensions/random/detail/uniform\_point\_distribution.hpp](https://github.com/BoostGSoC19/geometry/blob/develop/include/boost/geometry/extensions/random/detail/uniform_point_distribution.hpp)
[include/boost/geometry/extensions/random/dispatch/uniform\_point\_distribution.hpp](https://github.com/BoostGSoC19/geometry/blob/develop/include/boost/geometry/extensions/random/dispatch/uniform_point_distribution.hpp)
[include/boost/geometry/extensions/random/strategies/agnostic/uniform\_envelope\_rejection.hpp](https://github.com/BoostGSoC19/geometry/blob/develop/include/boost/geometry/extensions/random/strategies/agnostic/uniform_envelope_rejection.hpp)
[include/boost/geometry/extensions/random/strategies/agnostic/uniform\_linear.hpp](https://github.com/BoostGSoC19/geometry/blob/develop/include/boost/geometry/extensions/random/strategies/agnostic/uniform_linear.hpp)
[include/boost/geometry/extensions/random/strategies/agnostic/uniform\_point\_distribution\_discrete.hpp](https://github.com/BoostGSoC19/geometry/blob/develop/include/boost/geometry/extensions/random/strategies/agnostic/uniform_point_distribution_discrete.hpp)
[include/boost/geometry/extensions/random/strategies/cartesian/uniform\_point\_distribution\_box.hpp](https://github.com/BoostGSoC19/geometry/blob/develop/include/boost/geometry/extensions/random/strategies/cartesian/uniform_point_distribution_box.hpp)
[include/boost/geometry/extensions/random/strategies/cartesian/uniform\_point\_distribution\_segment.hpp](https://github.com/BoostGSoC19/geometry/blob/develop/include/boost/geometry/extensions/random/strategies/cartesian/uniform_point_distribution_segment.hpp)
[include/boost/geometry/extensions/random/strategies/spherical/edwilliams\_avform\_intermediate.hpp](https://github.com/BoostGSoC19/geometry/blob/develop/include/boost/geometry/extensions/random/strategies/spherical/edwilliams_avform_intermediate.hpp)
[include/boost/geometry/extensions/random/strategies/spherical/uniform\_inverse\_transform\_sampling.hpp](https://github.com/BoostGSoC19/geometry/blob/develop/include/boost/geometry/extensions/random/strategies/spherical/uniform_inverse_transform_sampling.hpp)
[include/boost/geometry/extensions/random/strategies/uniform\_point\_distribution.hpp](https://github.com/BoostGSoC19/geometry/blob/develop/include/boost/geometry/extensions/random/strategies/uniform_point_distribution.hpp)
[include/boost/geometry/extensions/random/uniform\_point\_distribution.hpp](https://github.com/BoostGSoC19/geometry/blob/develop/include/boost/geometry/extensions/random/uniform_point_distribution.hpp)
[include/boost/geometry/extensions/triangulation/algorithms/delaunay\_triangulation.hpp](https://github.com/BoostGSoC19/geometry/blob/develop/include/boost/geometry/extensions/triangulation/algorithms/delaunay_triangulation.hpp)
[include/boost/geometry/extensions/triangulation/geometries/triangulation.hpp](https://github.com/BoostGSoC19/geometry/blob/develop/include/boost/geometry/extensions/triangulation/geometries/triangulation.hpp)
[include/boost/geometry/extensions/triangulation/geometries/voronoi\_adaptor.hpp](https://github.com/BoostGSoC19/geometry/blob/develop/include/boost/geometry/extensions/triangulation/geometries/voronoi_adaptor.hpp)
[include/boost/geometry/extensions/triangulation/strategies/cartesian/accelerated\_shull.hpp](https://github.com/BoostGSoC19/geometry/blob/develop/include/boost/geometry/extensions/triangulation/strategies/cartesian/accelerated_shull.hpp)
[include/boost/geometry/extensions/triangulation/strategies/cartesian/detail/accelerated\_shull.hpp](https://github.com/BoostGSoC19/geometry/blob/develop/include/boost/geometry/extensions/triangulation/strategies/cartesian/detail/accelerated_shull.hpp)
[include/boost/geometry/extensions/triangulation/strategies/cartesian/detail/precise\_math.hpp](https://github.com/BoostGSoC19/geometry/blob/develop/include/boost/geometry/extensions/triangulation/strategies/cartesian/detail/precise_math.hpp)
[include/boost/geometry/extensions/triangulation/strategies/cartesian/in\_circle\_robust.hpp](https://github.com/BoostGSoC19/geometry/blob/develop/include/boost/geometry/extensions/triangulation/strategies/cartesian/in_circle_robust.hpp)
[include/boost/geometry/extensions/triangulation/strategies/cartesian/side\_robust.hpp](https://github.com/BoostGSoC19/geometry/blob/develop/include/boost/geometry/extensions/triangulation/strategies/cartesian/side_robust.hpp)
[include/boost/geometry/extensions/triangulation/strategies/delaunay\_triangulation.hpp](https://github.com/BoostGSoC19/geometry/blob/develop/include/boost/geometry/extensions/triangulation/strategies/delaunay_triangulation.hpp)
[include/boost/geometry/extensions/triangulation/triangulation.hpp](https://github.com/BoostGSoC19/geometry/blob/develop/include/boost/geometry/extensions/triangulation/triangulation.hpp)
 
Except for two Jamfiles, these files were all created from scratch during the GSoC.

The above comparison contains the entire work product. Because of some branch reorganization, it does not reflect the complete history of the GSoC work and the time of the creation of most of the linked code. If the entire code history is of interest, [here](https://github.com/BoostGSoC19/geometry/compare/b4634fdb4520d722246ebfa06682fbd111cfe4d8...BoostGSoC19:feature/random_sampling). The correct dates of the individual commits can be found by clicking on the commit message.

In the following passages, I will elaborate on the individual project goals and the work products in greater detail.

## Robust geometric predicates
### Motivation
The construction of a Delaunay triangulation usually (depending on the algorithm used) involves the repeated evaluation of two geometric predicates, namely the orientation check and the in-circle check. The orientation check determines on which side of a segment, given by two points, a third point lies and, consequently, whether the three given points constitute a valid, positively oriented triangle. The in-circle check determines whether the circumcircle of a given triangle contains the fourth given point and consequently, whether a triangulation containing this triangle as a face and the fourth point as a vertex violates the Delaunay property.
A straightforward way to perform the orientation check is to compute the signed triangle area of the given three points. A triangle is valid and positively oriented if and only if its signed area is positive. We can express the signed areas of a triangle in [determinant form](https://proofwiki.org/wiki/Area_of_Triangle_in_Determinant_Form).  Boost.Geometry already includes a strategy that implements this method of checking orientation in the [side\_by\_triangle strategy](https://www.boost.org/doc/libs/1_71_0/libs/geometry/doc/html/geometry/reference/strategies/strategy_side_side_by_triangle.html). Similarly,  although not yet implemented as a strategy in Boost.Geometry, the in-circle check can also be performed by evaluating the sign of a determinant (see [here](http://mathworld.wolfram.com/Circumcircle.html)). However, due to the [limitations of floating-point arithmetics](https://en.wikipedia.org/wiki/Floating-point_arithmetic#Accuracy_problems), especially [cancellation](https://en.wikipedia.org/wiki/Loss_of_significance), the direct computation of these determinants may produce incorrect results. Such false results may cause the construction of a Delaunay triangulation to break down; therefore, they motivate the implementation of more robust geometric predicates.

### Design
There are various ways to work around the limited precision of floating-point types, some of which, such as using exact number types for all calculations or extended precision incur heavy performance penalties. I have instead chosen to implement the adaptive, robust predicates described by Jonathan Richard Shewchuk in his article [Adaptive Precision Floating-Point Arithmetic and Fast Robust Geometric Predicates](https://doi.org/10.1007/PL00009321) (paper and more information is freely available at [www.cs.cmu.edu/~quake/robust.html](https://www.cs.cmu.edu/~quake/robust.html) at the time of writing this).
The basic idea is to compute non-overlapping expansions of floating-point computation results that contain the bits of the result that would be eliminated by the rounding aspect of direct floating-point arithmetics. The full expansion of a calculation then represents its result at full precision, which makes the computation robust. The implementation is made adaptive by computing the parts of the expansions of interim results in decreasing order of their significance in the final result. At various stages of the computation, the incomplete result is checked against error bounds and, if the sign of the result is already guaranteed, the calculation is terminated early. This means that, for most inputs, the amount of work done is not much higher than with standard floating-point arithmetics.
I have chosen to implement the robust predicates as described by Shewchuk because they are fast and well-described such that they were easy to implement.

### Work Product
I have implemented the methods from the linked paper that were used in the orient2d and incircle functions. The actual implementation of the calculations can be found in [include/boost/geometry/extensions/triangulation/strategies/cartesian/detail/precise\_math.hpp](https://github.com/BoostGSoC19/geometry/blob/develop/include/boost/geometry/extensions/triangulation/strategies/cartesian/detail/precise_math.hpp). Comparing them to the [original C implementation](https://www.cs.cmu.edu/afs/cs/project/quake/public/code/predicates.c), allows me to highlight some design choices that were enabled by the use of modern C++.
Instead of computing epsilon and splitter at run-time and storing them in global variables, my implementation does not involve any global variables and instead computes epsilon and splitter at compile-time (depending on constexpr-support) using the numerical_limits header from the STL.
Rather than macros for smaller math functions, I have used templates, which delegates micro-optimization related decisions about inlining to the compiler and allows better scoping of temporary variables.
Rather than passing points, I was able to make use of the std::array class, which makes array bounds explicit throughout the whole code.
Because I used templates, it was easy to add a compile-time parameter that allows the user of the implementation to specify the maximum precision.
Having the mathematics implemented in the detail-namespace, I then added strategies in two classes
[include/boost/geometry/extensions/triangulation/strategies/cartesian/side\_robust.hpp](https://github.com/BoostGSoC19/geometry/blob/develop/include/boost/geometry/extensions/triangulation/strategies/cartesian/side_robust.hpp)
[include/boost/geometry/extensions/triangulation/strategies/cartesian/in\_circle\_robust.hpp](https://github.com/BoostGSoC19/geometry/blob/develop/include/boost/geometry/extensions/triangulation/strategies/cartesian/in_circle_robust.hpp)
These classes also contain the documentation of my work. Finally, I have implemented two test cases [for the orientation test](https://github.com/BoostGSoC19/geometry/blob/develop/extensions/test/triangulation/side_robust.cpp) and [for the in-circle test](https://github.com/BoostGSoC19/geometry/blob/develop/include/boost/geometry/extensions/triangulation/strategies/cartesian/in_circle_robust.hpp) with numbers that would produce incorrect results in a non-robust implementation.

## Triangulation, Triangle and Voronoi data structures
### Motivation
Delaunay Triangulations and Voronoi diagrams have many applications. For example, they are used in Finite Element Methods or Finite Volume Methods. Because my project involved an algorithm for Delaunay triangulation and Boost.Geometry does not have a triangulation data structure, it was necessary to implement one. A triangle data structure was also planned, but during the work, it became clear that it was sufficient for now and much easier to make the triangles of my triangulation conform to the ring concept.

### Design
I implemented the triangulation as a list of vertices and faces with references to each other. Because the Voronoi diagram is the dual of the Delaunay triangulation, I found that it was sufficient, to implement adapter classes that allow viewing Triangulation vertices as Voronoid Diagram faces and viewing Triangulation faces as Voronoi Vertices.

### Work Product
My implementation of a triangulation data structure can be found in [include/boost/geometry/extensions/triangulation/geometries/triangulation.hpp](https://github.com/BoostGSoC19/geometry/blob/develop/include/boost/geometry/extensions/triangulation/geometries/triangulation.hpp). I will again highlight some design choices:
* The vertex struct contains a point and a face-iterator to one of its adjacent faces. All necessary traits are declared so that vertex instances can be directly treated as points by other Boost.Geometry algorithms. Holding a face-iterator rather than a face-index allows iterating over neighboring vertices and faces without passing a reference to the triangulation itself.
* The face struct contains an array of three vertex-iterators. Using boost:indirect_iterator the face can be directly treated as a range of vertices so that it can be made to conform to the ring concept. Other than that, it stores iterators to its three neighboring faces and additionally the indices for half-edge reversal.
* The triangulation requires a point type as a template parameter. It optionally allows specifying the triangle orientation and the type of containers that are used, as well as their allocators. By default, triangles are oriented counterclockwise, and vectors are used to store faces and vertices. Since by construction, iterator stability is necessary, the number of vertices must be provided in advance if vectors are used. If that is undesirable, a user may opt to use container types with better iterator stability.
* Several invariants are maintained to simplify navigation over the triangulation. 
 * The i-th neighbor of each triangle is the face opposite to its i-th vertex. This simplifies flip operations.
 * The triangulation always holds an iterator to a boundary vertex to simplify iteration over the boundary edges.
 * If a vertex lies on the boundary, the iterator stored to an incident face will point to a face with two boundary vertices. This simplifies the stop-criterion for the iteration over its incident faces or its neighboring vertices.
* Several free functions that return ranges are provided, such us, for vertices, the range of incident faces and incident vertices, and, for faces, the range of adjacent faces, incident faces, and vertices.
My implementation of the Voronoi diagram data structure can be found in [include/boost/geometry/extensions/triangulation/geometries/voronoi\_adaptor.hpp](https://github.com/BoostGSoC19/geometry/blob/develop/include/boost/geometry/extensions/triangulation/geometries/voronoi_adaptor.hpp)
It consists of two classes
* The `voronoi_vertex_view` is constructed from a triangulation face and allows to access it as the corresponding Voronoi vertex (which is equal to the circumcircle center of the face.
* The `voronoi_face_view` is constructed from a triangulation vertex.

## Delaunay Triangulation
### Design
I adapted the S-Hull algorithm as described in [S-hull: a fast radial sweep-hull routine for Delaunay triangulation](https://arxiv.org/abs/1604.01428) by David Sinclair. To accelerate the construction, I changed step 7 to perform a binary search over the convex hull, rather than a linear search. This optimization greatly reduces the number of calls to the orientation predicate.

### Work Product
The function that is used to call the construction is implemented in [include/boost/geometry/extensions/triangulation/algorithms/delaunay\_triangulation.hpp](https://github.com/BoostGSoC19/geometry/blob/develop/include/boost/geometry/extensions/triangulation/algorithms/delaunay_triangulation.hpp), but the actual implementation has been delegated to a construction strategy because it is coordinate-system and dimension-specific and more construction strategies may be added in the future. The construction has been implemented in [include/boost/geometry/extensions/triangulation/strategies/cartesian/accelerated\_shull.hpp](https://github.com/BoostGSoC19/geometry/blob/develop/include/boost/geometry/extensions/triangulation/strategies/cartesian/accelerated_shull.hpp).
Additionally, I produced a unit test in [extensions/test/triangulation/triangulation.cpp](https://github.com/BoostGSoC19/geometry/blob/develop/extensions/test/triangulation/triangulation.cpp) that produces a small triangulation and an example in [extensions/example/triangulation/triangulation\_example.cpp](https://github.com/BoostGSoC19/geometry/blob/develop/extensions/example/triangulation/triangulation_example.cpp) that demonstrates basic usage of the triangulation and the Voronoi adapter. The output file of the example is the following graphic:
<img src="/images/triangulation_example.svg" width="720px" height="720px">

## Random Point Distributions
### Design
Since there was no concept of geometry distributions in Boost.Geometry before, I decided to model it after the existing [concept of number distributions](https://www.boost.org/doc/libs/1_71_0/doc/html/boost_random/reference.html#boost_random.reference.concepts.random_distribution) as found in Boost.Random or the STL. In place of the `min()` and `max()`, I have put a `domain()` function because the former functions are not applicable in a multidimensional space. Other than that, I think I was able to adapt the existing distribution concept to geometries.

### Work Product
The general interface of uniform point distributions can be found in [include/boost/geometry/extensions/random/uniform\_point\_distribution.hpp](https://github.com/BoostGSoC19/geometry/blob/develop/include/boost/geometry/extensions/random/uniform_point_distribution.hpp). To stay true to the strategy-paradigm of Boost.Geometry, I implemented the CS- and Geometry-specific code in strategies.
* [include/boost/geometry/extensions/random/strategies/agnostic/uniform_envelope_rejection.hpp](https://github.com/BoostGSoC19/geometry/blob/develop/include/boost/geometry/extensions/random/strategies/agnostic/uniform_envelope_rejection.hpp) contains a CS-agnostic strategy that applies to areal geometries in 2D spaces, such as polygons, and to volumetric geometries in 3D spaces. Samples are obtained by computing the envelope and sampling uniformly in the envelope. If the resulting point is within the geometry, the function returns it. Otherwise, it samples a new point. Uniform sampling in the box is done by delegating to a uniform_point_distribution for a box.
* [include/boost/geometry/extensions/random/strategies/agnostic/uniform\_linear.hpp](https://github.com/BoostGSoC19/geometry/blob/develop/include/boost/geometry/extensions/random/strategies/agnostic/uniform_linear.hpp) contains a CS-agnostic strategy that applies to line strings and multi-line strings, by storing a list of the accumulated lengths of all pieces, sampling a number between zero and the total length and mapping that to the appropriate subsegment. The mapping on the specific subsegment is then performed by a CS-specific strategy.
* [include/boost/geometry/extensions/random/strategies/agnostic/uniform\_point\_distribution\_discrete.hpp](https://github.com/BoostGSoC19/geometry/blob/develop/include/boost/geometry/extensions/random/strategies/agnostic/uniform_point_distribution_discrete.hpp) contains a CS-agnostic strategy for sampling in single points (trivial) and multi-points, which is done by sampling an integer between 0 and the number of points minus 1 and returning the corresponding point.
* [include/boost/geometry/extensions/random/strategies/cartesian/uniform\_point\_distribution\_box.hpp](https://github.com/BoostGSoC19/geometry/blob/develop/include/boost/geometry/extensions/random/strategies/cartesian/uniform_point_distribution_box.hpp) contains a strategy for uniform sampling in cartesian boxes. It works by generating n numbers for an n-dimensional box and then create a point from it. This strategy assumes uniformity in high-dimensions from the Generator.
* [include/boost/geometry/extensions/random/strategies/cartesian/uniform\_point\_distribution\_segment.hpp](https://github.com/BoostGSoC19/geometry/blob/develop/include/boost/geometry/extensions/random/strategies/cartesian/uniform_point_distribution_segment.hpp) generates uniform points on cartesian line segments by applying a linear map to a number from zero to one.
* [include/boost/geometry/extensions/random/strategies/spherical/edwilliams\_avform\_intermediate.hpp](https://github.com/BoostGSoC19/geometry/blob/develop/include/boost/geometry/extensions/random/strategies/spherical/edwilliams_avform_intermediate.hpp) contains a strategy to sample uniformly from spherical segments using the formula found at [www.edwilliams.org/avform.htm#Intermediate](https://www.edwilliams.org/avform.htm#Intermediate).
* [include/boost/geometry/extensions/random/strategies/spherical/uniform\_inverse\_transform\_sampling.hpp](https://github.com/BoostGSoC19/geometry/blob/develop/include/boost/geometry/extensions/random/strategies/spherical/uniform_inverse_transform_sampling.hpp) is a strategy to generate uniform points in a sphere using inverse transform sampling.
After implementing the strategies, I added a unit test in [extensions/test/random/random.cpp](https://github.com/BoostGSoC19/geometry/blob/develop/extensions/test/random/random.cpp). The test checks whether
* point distributions are correctly recovered from `operator<<` and `operator>>`, 
* the generated points lie in the domain,
* the results are roughly uniformly distributed.
Finally, I've added an example for Random Point Geometries. The example shows how to generate points in various cartesian geometries as well as one instance of spherical distributions. Its output file is the following graphic:
<img src="/images/random_example.svg" width="720px" height="720px">

[project]: https://summerofcode.withgoogle.com/projects/#5605229809106944
[gsoc-repo]: https://github.com/BoostGSoC19/geometry
[boost-geometry]: https://github.com/boostorg/geometry
[project3]: https://github.com/boostorg/boost/wiki/Google-Summer-of-Code:-2019#project-3
[project4]: https://github.com/boostorg/boost/wiki/Google-Summer-of-Code:-2019#project-4-1
[boost-gsoc-develop]: https://github.com/BoostGSoC19/geometry/tree/develop
[work-product-comparison]: https://github.com/BoostGSoC19/geometry/compare/5679ccd08fa5bd09c424a6a7878ad0dafc2c8f93...BoostGSoC19:4c1cf99ad9f20d85afe30b170501ab625a15b11b
