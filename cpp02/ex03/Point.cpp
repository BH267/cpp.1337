#include "Point.hpp"
#include "Fixed.hpp"
#include <iostream>
#include <ostream>


Point::Point() : x(0), y(0)
{
	std::cout << "\033[38;2;59;59;59mthe Point default constructer called\033[0m" <<  std::endl;
}

Point::Point(Fixed a, Fixed b) : x(a), y(b)
{
	std::cout << "\033[38;2;59;59;59mthe Point constructer called\033[0m" <<  std::endl;
}

Point::Point(float a, float b) : x(a), y(b)
{
	std::cout << "\033[38;2;59;59;59mthe Point constructer called\033[0m" <<  std::endl;
}

Point::Point(const Point& p) : x(p.x), y(p.y)
{
	std::cout << "\033[38;2;59;59;59mPoint's Copy constructor called\033[0m" << std::endl;
}

Point &Point::operator=(const Point &p)
{
	std::cout << "\033[38;2;59;59;59mPoint's Copy assignment operator called\033[0m" << std::endl;
	if (this != &p)
	{}
	return *this;
}

Fixed	Point::getX(void) const {return x;}

Fixed	Point::getY(void) const {return y;}

Point::~Point()
{
	std::cout << "\033[38;2;59;59;59mthe Point destructer called\033[0m" <<  std::endl;
}
