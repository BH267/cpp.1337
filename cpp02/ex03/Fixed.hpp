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

	bool operator>(const Fixed &) const;
	bool operator<(const Fixed &) const;
	bool operator>=(const Fixed &) const;
	bool operator<=(const Fixed &) const;
	bool operator==(const Fixed &) const;
	bool operator!=(const Fixed &) const;

	Fixed operator+(const Fixed &) const;
	Fixed operator-(const Fixed &) const;
	Fixed operator*(const Fixed &) const;
	Fixed operator/(const Fixed &) const;

	Fixed& operator++(void);
	Fixed operator++(int);
	Fixed& operator--(void);
	Fixed operator--(int);
	
	static Fixed& min(Fixed&, Fixed&);
	static Fixed& max(Fixed&, Fixed&);
	static const Fixed& min(const Fixed&, const Fixed&);
	static const Fixed& max(const Fixed&, const Fixed&);

	~Fixed();
};
std::ostream& operator<<(std::ostream&, const Fixed &);
