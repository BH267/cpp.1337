#pragma once 

# include "Fixed.hpp"

class Point
{
		Fixed const x;
		Fixed const y;
	public:
		Point();
		Point(const Point&);
		Point(Fixed a, Fixed b);
		Point(float a, float b);
		Point &operator=(const Point&);
		~Point();
		Fixed getX(void) const;
		Fixed getY(void) const;
};
