#include "PowerFist.hpp"

PowerFist::PowerFist() :
	AWeapon("Power Fist", 8, 50)
{
}

PowerFist::~PowerFist()
{
}

PowerFist::PowerFist(const PowerFist& other) :
	AWeapon("Power Fist", 8, 50)
{
}

PowerFist& PowerFist::operator=(const PowerFist &other)
{
	return *this;
}

void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
