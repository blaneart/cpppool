#include "RadScorpion.hpp"

RadScorpion::RadScorpion() :
	Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion& other) :
	Enemy(other)
{

}

RadScorpion& RadScorpion::operator=(const RadScorpion & other)
{
	this->setType(other.getType());
	this->setHP(other.getHP());
	return *this;
}
RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}

void RadScorpion::takeDamage(int damage)
{
	Enemy::takeDamage(damage);
}
