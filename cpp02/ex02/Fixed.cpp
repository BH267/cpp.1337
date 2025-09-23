#include "Fixed.hpp"
#include <iostream>
#include <ostream>

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	fpn = 0;
}

Fixed::Fixed(int i)
{
	std::cout << "Int constructor called" << std::endl;
	fpn = i * (1 << nfb);
}

Fixed::Fixed(float i)
{
	std::cout << "Float constructor called" << std::endl;
	fpn = roundf(i * (1 << nfb));
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fx)
{
	std::cout << "Copy constructor called" << std::endl;
	setRawBits(fx.getRawBits());
}

Fixed &Fixed::operator=(const Fixed &fx)
{
	std::cout << "Copy assignment operator called" << std::endl;
	setRawBits(fx.getRawBits());
	return *this;
}

int	Fixed::getRawBits(void) const
{
	return (fpn);
}

void	Fixed::setRawBits( int const raw)
{
	fpn = raw;
}

std::ostream& operator<<(std::ostream &os, const Fixed &fx)
{
	os << fx.toFloat();
	return os;
}

int	Fixed::toInt(void) const
{
	return fpn >> nfb;
}

float	Fixed::toFloat(void) const
{
	return (float)fpn / (1 << nfb);
}

// the comparison operators

bool	Fixed::operator>(const Fixed &fx) const
{
	return (this->fpn > fx.fpn);
}

bool	Fixed::operator<(const Fixed &fx) const
{
	return (this->fpn < fx.fpn);
}

bool	Fixed::operator<=(const Fixed &fx) const
{
	return (this->fpn <= fx.fpn);
}

bool	Fixed::operator>=(const Fixed &fx) const
{
	return (this->fpn >= fx.fpn);
}

bool	Fixed::operator==(const Fixed &fx) const
{
	return (this->fpn == fx.fpn);
}

bool	Fixed::operator!=(const Fixed &fx) const
{
	return (this->fpn != fx.fpn);
}

// the arithmetic operators

int	Fixed::operator+(const Fixed &fx) const
{
	return (this->fpn + fx.fpn);
}

int	Fixed::operator-(const Fixed &fx) const
{
	return (this->fpn - fx.fpn);
}

int	Fixed::operator*(const Fixed &fx) const
{
	return (this->fpn * fx.fpn);
}

int	Fixed::operator/(const Fixed &fx) const
{
	return (this->fpn / fx.fpn);
}

// the inc/dec operators 

int	Fixed::operator++()
{
}
