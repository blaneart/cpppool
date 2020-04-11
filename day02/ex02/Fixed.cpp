#include "Fixed.hpp"

Fixed::Fixed()
{
	this->value = 0;
}

Fixed::Fixed(int const num)
{
	this->value = num << this->bits;
}

Fixed::Fixed(float const num)
{
	this->value = roundf(num * (1 << this->bits));
}

Fixed::~Fixed()
{
}
Fixed::Fixed( const Fixed& other )
{
  	value =  other.getRawBits();
}

Fixed& Fixed::operator=( const Fixed& other )
{
	value = other.getRawBits();
	return *this;
}

int Fixed::getRawBits( void ) const
{
	return this->value;
}

void Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

int Fixed::toInt( void ) const
{
	return ((int)this->value >> this->bits);
}

float Fixed::toFloat( void ) const
{
	return ((float)this->value / (1 << this->bits));
}

bool Fixed::operator>(const Fixed& rhs) const
{
	return (this->value > rhs.value);
}

bool Fixed::operator<(const Fixed& rhs)  const
{
	return (this->value < rhs.value);
}

bool Fixed::operator>=(const Fixed& rhs)  const
{
	return (this->value >= rhs.value);
}

bool Fixed::operator<=(const Fixed& rhs)  const
{
	return (this->value <= rhs.value);
}

bool Fixed::operator==(const Fixed& rhs)  const
{
	return (this->value == rhs.value);
}

bool Fixed::operator!=(const Fixed& rhs)  const
{
	return (this->value != rhs.value);
}

Fixed	Fixed::operator+(const Fixed &other)
{
	return (this->toFloat() + other.toFloat());
}

Fixed	Fixed::operator-(const Fixed &other)
{
	return (this->toFloat() - other.toFloat());
}

Fixed	Fixed::operator*(const Fixed &other)
{
	return (this->toFloat() * other.toFloat());
}

Fixed	Fixed::operator/(const Fixed &other)
{
	return (this->toFloat() / other.toFloat());
}

Fixed	&Fixed::operator++(void)
{
	this->value += 1;
	return (*this);
}

Fixed	&Fixed::operator--(void)
{
	this->value -= 1;
	return (*this);
}

Fixed			Fixed::operator++(int)
{
	Fixed tmp(*this);
    operator++();
    return (tmp);
}

Fixed			Fixed::operator--(int)
{
    Fixed tmp(*this);
    operator--();
    return (tmp);
}

std::ostream	&operator<<(std::ostream &out, const Fixed &val)
{
    out << val.toFloat();
    return (out);
}

Fixed			&Fixed::min( Fixed &a, Fixed &b)
{
    return (a < b ? a : b);
}

const Fixed		&Fixed::min( const Fixed &a, const Fixed &b)
{
    return (a < b ? a : b);
}

Fixed			&Fixed::max( Fixed &a, Fixed &b)
{
    return (a > b ? a : b);
}

const Fixed		&Fixed::max( const Fixed &a, const Fixed &b)
{
    return (a > b ? a : b);
}
