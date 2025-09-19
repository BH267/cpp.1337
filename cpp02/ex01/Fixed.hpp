#pragma once

#include <iostream>
#include <cmath>


class Fixed {
private:
	int	fpn;
	static const int nfb = 8;
public:
	Fixed();
	Fixed(int);
	Fixed(float);
	Fixed(const Fixed &);
	Fixed &operator=(const Fixed &);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;
	~Fixed();
};
std::ostream& operator<<(std::ostream&, const Fixed &);
