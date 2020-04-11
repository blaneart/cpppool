#include "Cure.hpp"

Cure::Cure():
	AMateria("cure")
{
}

Cure::Cure(const Cure& other) :
	AMateria(other)
{

}

Cure& Cure::operator=(const Cure& other)
{
	this->setXP(other.getXP());
	return *this;
}

Cure::~Cure()
{
}

AMateria *Cure::clone() const
{
	AMateria *buf = new Cure(*this);
	return buf;
}

void Cure::use(ICharacter & target)
{
	AMateria::use(target);
	std::cout << "* heals "<< target.getName() << "’s wounds *" <<std::endl;

}
