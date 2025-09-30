#include <iostream>
#include "Point.hpp"
#include "Fixed.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main()
{
    Point a(0.0f, 0.0f);
    Point b(5.0f, 0.0f);
    Point c(2.5f, 5.0f);

    Point inside(2.5f, 1.0f);
    Point onEdge(2.5f, 0.0f);
    Point outside(5.0f, 5.0f);

    bool in = bsp(a, b, c, inside);
    bool oe = bsp(a, b, c, onEdge);
    bool out = bsp(a, b, c, outside);

    std::cout << "Inside (2.5,1): " << in << std::endl;   // expect 1
    std::cout << "On edge (2.5,0): " << oe << std::endl;  // expect 0
    std::cout << "Outside (5,5): " << out << std::endl;   // expect 0

    return 0;
}
