#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::Fixed(int const num)
{
	std::cout << "Default int constructor called" << std::endl;
	this->value = num << this->bits;
}

Fixed::Fixed(float const num)
{
	std::cout << "Default float constructor called" << std::endl;
	this->value = roundf(num * (1 << this->bits));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
Fixed::Fixed( const Fixed& other )

{
	std::cout << "Copy constructor called" << std::endl;
  	value =  other.getRawBits();
}

Fixed& Fixed::operator=( const Fixed& other )
{
	std::cout << "Assignation operator called" << std::endl;
	value = other.getRawBits();
	return *this;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->value;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
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

std::ostream	&operator<<(std::ostream &out, const Fixed &val)
{
    out << val.toFloat();
    return (out);
}
