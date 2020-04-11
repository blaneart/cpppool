#ifndef FIXED_HPP_
#define FIXED_HPP_

#include <iostream>

class Fixed
{
	private:
		int value;
		static const int bits = 8;
	public:
		Fixed(int const = 0);
		~Fixed();
		Fixed(const Fixed&);
		Fixed& operator = (const Fixed&);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

#endif
