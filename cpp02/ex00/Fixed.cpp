#include "Fixed.hpp"
#include <iostream>
#include <ostream>

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	fpn = 0;
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

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (fpn / 256);
}

void	Fixed::setRawBits( int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	fpn = raw * 256;
}

Fixed &Fixed::operator=(const Fixed &fx)
{
	std::cout << "Copy assignment operator called" << std::endl;
	setRawBits(fx.getRawBits());
	return *this;
}
