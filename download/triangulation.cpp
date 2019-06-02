#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <random>
#include <functional>
#include <chrono>

#include <boost/geometry.hpp>
#include <boost/geometry/extensions/triangulation/triangulation.hpp>

namespace bg = boost::geometry;

int main() {
    const bool svg_out = true;
    const bool legalize = true;
    for(int i=0; i<1; ++i) {
        using point = bg::model::point<double, 2, bg::cs::cartesian>;
        using segment = bg::model::segment<point>;
        using triangulation = bg::model::triangulation<point>;
        std::default_random_engine generator(19);
        std::normal_distribution<> distribution(0.0,1.0);

        const std::size_t points_count = 1'000;
        auto gen = std::bind(distribution, generator);

        triangulation out;
        std::vector<point> in;
        for(int i=0; i < points_count; ++i)
            in.push_back(point(gen(), gen()));
        bg::delaunay_triangulation(in, out, legalize);

        if(svg_out) {
            std::ofstream svg("triangulation.svg");
            boost::geometry::svg_mapper<point> mapper(svg, 720, 720);

            for(auto const& f : bg::vertex_range(out)) {
                mapper.add(f);
            }


            for(auto const& f : bg::face_range(out)) {
                mapper.map(f, "fill-opacity:0.3;fill:rgb(51,51,153);stroke:rgb(26,26,76);stroke-with:1");
            }
            auto bv = out.boundary_vertex();
            std::size_t prev;
            do{
                prev = bv;
                bv = out.boundary_next(bv);
                segment s((out.vertices_begin()+prev)->m_p, (out.vertices_begin()+bv)->m_p);
                mapper.map(s, "opacity:1.0;fill:none;stroke:rgb(192,0,0);stroke-width:1");
            }while(bv != out.boundary_vertex());
            for(auto const& v : bg::vertex_range(out)) {
                mapper.map(v, "fill-opacity:0.5;fill:rgb(153,204,0);stroke:rgb(153,204,0);stroke-width:1", 2);
            }
        }
    }
    return 0;
}
