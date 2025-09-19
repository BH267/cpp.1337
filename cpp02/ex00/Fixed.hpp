#pragma once

#include <iostream>


class Fixed {
private:
	int	fpn;
	static const int nfb = 8;
public:
	Fixed();
	Fixed(int);
	Fixed(const Fixed &);
	//Fixed &operator=(Fixed &&) = default;
	Fixed &operator=(const Fixed &);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	~Fixed();
};
