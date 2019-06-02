#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <random>
#include <functional>
#include <chrono>
#include <algorithm>

#include <boost/geometry.hpp>
#include <boost/geometry/extensions/random/uniform_point_distribution.hpp>

namespace bg = boost::geometry;

int main() {
    const bool svg_out = true;
    for(int i=0; i<1; ++i) {
        using point = bg::model::point<double, 2, bg::cs::cartesian>;
        using segment = bg::model::segment<point>;
        using multi_point = bg::model::multi_point<point>;
        using box = bg::model::box<point>;
        using polygon = bg::model::polygon<point>;
        std::default_random_engine generator(i);

        const std::size_t points_count = 100;
        box b(point(0, 0), point(10, 10));
        segment s(point(11,0), point(21, 10));
        multi_point mp;
        for(double y=11.0; y<=21.0; y+=0.5) {
            for(double x=0.0; x<=10.0; x+=0.5) {
                bg::append(mp, point(x, y));
            }
        }
        polygon poly;
        boost::geometry::read_wkt("POLYGON((16 21,17.122569941449 17.5450849718747,20.7552825814758 17.5450849718747,17.8163563200134 15.4098300562505,18.9389262614624 11.9549150281253,16 14.0901699437495,13.0610737385376 11.9549150281253,14.1836436799866 15.4098300562505,11.2447174185242 17.5450849718747,14.877430058551 17.5450849718747,16 21))", poly);

        auto box_dist = bg::random::uniform_point_distribution(b);
        auto mp_dist = bg::random::uniform_point_distribution(mp);
        auto mp_gen = std::bind(mp_dist, generator);
        auto seg_dist = bg::random::uniform_point_distribution(s);
        auto seg_gen = std::bind(seg_dist, generator);
        auto poly_dist = bg::random::uniform_point_distribution(poly);
        auto poly_gen = std::bind(poly_dist, generator);

        std::cout << "Box Distribution: " << box_dist << "\n";
        std::cin >> box_dist;
        std::cout << "Box Distribution after reading: " << box_dist << "\n";
        auto box_gen = std::bind(box_dist, generator);

        std::vector<point> in;
        std::generate_n(std::back_inserter(in), points_count, box_gen);
        std::generate_n(std::back_inserter(in), points_count, seg_gen);
        std::generate_n(std::back_inserter(in), points_count, mp_gen);
        std::generate_n(std::back_inserter(in), points_count, poly_gen);

        if(svg_out) {
            std::ofstream svg("random.svg");
            boost::geometry::svg_mapper<point> mapper(svg, 720, 720);

            mapper.add(b);
            mapper.add(s);
            mapper.add(mp);
            mapper.add(poly);
            mapper.add(box(point(-1, -1), point(22, 22)));

            for(auto const& p : in) {
                mapper.add(p);
            }

            mapper.map(b, "fill-opacity:0.3;fill:rgb(51,51,153);stroke:rgb(51,51,153);stroke-width:2");
            mapper.map(s, "fill-opacity:0.3;fill:rgb(51,51,153);stroke:rgb(51,51,153);stroke-width:2");
            mapper.map(mp, "fill-opacity:0.3;fill:rgb(51,51,153);stroke:rgb(51,51,153);stroke-width:2", 2);
            mapper.map(poly, "fill-opacity:0.3;fill:rgb(51,51,153);stroke:rgb(51,51,153);stroke-width:2");
            for(auto const& p : in) {
                mapper.map(p, "fill-opacity:1;fill:rgb(255,0,0);stroke:rgb(255,0,0);stroke-width:1", 1);
            }
        }
    }
    return 0;
}
