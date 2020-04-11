#include "Ice.hpp"

Ice::Ice() :
	AMateria("ice")
{
}

Ice::Ice(const Ice& other) :
	AMateria(other)
{

}

Ice& Ice::operator=(const Ice& other)
{
	this->setXP(other.getXP());
	return *this;
}

Ice::~Ice()
{
}

AMateria *Ice::clone() const
{
	AMateria *buf = new Ice(*this);
	return buf;
}

void Ice::use(ICharacter & target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at "<< target.getName() << " *" <<std::endl;

}
