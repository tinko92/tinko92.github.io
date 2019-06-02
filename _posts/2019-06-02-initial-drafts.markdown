---
layout: post
title:  "Initial Implementations"
date:   2019-06-02 23:58:35 +0200
categories: gsoc2019
---
After the first week of the GSoC coding period, I can present some initial results. As described in my [project abstract][project] my goal is to add [Delaunay Triangulation][delaunay-triangulation] and random point distributions to [Boost.Geometry][boostgeometry]. As a foundation for further discussion about the interface specifics, I started by working on implementations first. 

The code can be found in the [BoostGSoC19/geometry repository][gsoc-repo], more specifically in the branches [feature/random_sampling][random_sampling] and [feature/triangulation][triangulation]. The following images show outputs that were produced using the code written this week.

<img src="/images/random.svg" width="720px" height="720px">

[random.cpp][random_cpp]

<img src="/images/triangulation.svg" width="720px" height="720px">

[triangulation.cpp][triangulation_cpp]

[random_points_output]: /images/random.svg
[random_cpp]: /download/random.cpp
[triangulation_output]: /images/triangulation.svg
[triangulation_cpp]: /download/triangulation.cpp
[project]: https://summerofcode.withgoogle.com/projects/#5605229809106944
[random_sampling]: https://github.com/BoostGSoC19/geometry/tree/feature/random_sampling
[delaunay-triangulation]: https://en.wikipedia.org/wiki/Delaunay_triangulation
[boostgeometry]: https://www.boost.org/libs/geometry
[gsoc-repo]: https://github.com/BoostGSoC19/geometry
[triangulation]: https://github.com/BoostGSoC19/geometry/tree/feature/triangulation
