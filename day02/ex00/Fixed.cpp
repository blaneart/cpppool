#include "Fixed.hpp"

Fixed::Fixed(int const raw)
{
	std::cout << "Default constructor called" << std::endl;
	value = raw;
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
