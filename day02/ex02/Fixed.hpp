#ifndef FIXED_HPP_
#define FIXED_HPP_

#include <iostream>
#include <cmath>
class Fixed
{
	private:
		int value;
		static const int bits = 8;
	public:
		Fixed();
		Fixed(int const);
		Fixed(float const);
		~Fixed();
		Fixed(const Fixed&);
		Fixed& operator = (const Fixed&);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		int toInt( void ) const;
		float toFloat( void ) const;
		bool 	operator>(const Fixed& rhs)  const;
		bool 	operator<(const Fixed& rhs)  const;
		bool 	operator>=(const Fixed& rhs)  const;
		bool 	operator<=(const Fixed& rhs)  const;
		bool 	operator==(const Fixed& rhs)  const;
		bool 	operator!=(const Fixed& rhs)  const;
Fixed	operator+(const Fixed &other);
Fixed	operator-(const Fixed &other);
Fixed	operator*(const Fixed &other);
Fixed	operator/(const Fixed &other);
Fixed	&operator++( void );
Fixed	&operator--( void );
Fixed	operator++(int);
Fixed	operator--(int);
static Fixed			&min( Fixed &a, Fixed &b);
const static Fixed		&min( const Fixed &a, const Fixed &b);
static Fixed			&max( Fixed &a, Fixed &b);
const static Fixed		&max( const Fixed &a, const Fixed &b);
};

std::ostream				&operator<<(std::ostream &out, const Fixed &in);
#endif
