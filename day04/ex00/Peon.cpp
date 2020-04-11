#include "Peon.hpp"

Peon::Peon(std::string name):
	Victim(name)
{
	this->name = name;
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

Peon::Peon(const Peon& other):
	Victim(other.name)
{
	this->name = other.name;
}

Peon& Peon::operator=(const Peon& other)
{
	this->name = other.name;
	return *this;
}

void Peon::getPolymorphed( void ) const
{
	std::cout << this->getName() << " has been turned into a pink pony!" << std::endl;
}
