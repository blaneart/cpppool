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
};

std::ostream				&operator<<(std::ostream &out, const Fixed &in);
#endif
