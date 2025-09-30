#include "Point.hpp"

// which side of the vector the point is on :
Fixed	side(const Point& a, const Point& b, const Point& p)
{
	return (b.getX() - a.getX()) * (p.getY() - a.getY()) - (b.getY() - a.getY()) * (p.getX() - a.getX());
}

bool bsp( Point const a, Point const b, Point const c, Point const p)
{
	Fixed s1 = side(a, b, p);
	Fixed s2 = side(b, c, p);
	Fixed s3 = side(c, a, p);

	if (s1 == 0 || s2 == 0 || s3 == 0)
		return false;
	return ((s1 > 0 && s2 > 0 && s3 > 0)
		|| (s1 < 0 && s2 < 0 && s3 < 0));
}

