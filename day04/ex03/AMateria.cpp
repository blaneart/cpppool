#include "AMateria.hpp"

AMateria::AMateria(std::string const & type)
{
	this->type = type;
	this->_xp = 0;
}

AMateria::AMateria(const AMateria& other)
{
	this->type = other.getType();
	this->_xp = other.getXP();
}

AMateria & AMateria::operator=(const AMateria& other)
{
	this->type = other.getType();
	this->_xp = other.getXP();
	return *this;
}

AMateria::~AMateria()
{

}

std::string const & AMateria::getType() const
{
	return this->type;
}

unsigned int AMateria::getXP() const
{
	return this->_xp;
}

void AMateria::setXP(unsigned int xp)
{
	this->_xp = xp;
}

void AMateria::use(ICharacter & target)
{
	this->_xp = this->_xp + 10;
}
