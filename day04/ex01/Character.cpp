#include "Character.hpp"

Character::Character(std::string const & name)
{
	this->name = name;
	this->ap = 40;
	this->wp = NULL;
}

Character::Character(const Character &other)
{
	this->name = other.getName();
	this->ap = other.ap;
	this->wp = other.wp;
}

Character& Character::operator=(const Character &other)
{
	this->name = other.getName();
	this->ap = other.ap;
	this->wp = other.wp;
	return *this;
}

Character::~Character()
{
}

void Character::recoverAP()
{
	this->ap = this->ap + 10;
	if (this->ap > 40)
		this->ap = 40;
}

void Character::equip(AWeapon *gun)
{
	this->wp = gun;
}

void Character::attack(Enemy *frag)
{
	if (frag && this->wp && this->ap >= this->wp->getAPCost())
	{
		std::cout << this->getName() << " attacks "
				<< frag->getType() << " with a " << this->wp->getName()
				<< std::endl;
		this->wp->attack();
		frag->takeDamage(this->wp->getDamage());
		if (frag->getHP() <= 0)
				delete frag;
		this->ap = this->ap - this->wp->getAPCost();
	}
}

std::string const Character::getName() const
{
	return this->name;
}

AWeapon *Character::getWeapon() const
{
	return this->wp;
}

int Character::getAP() const
{
	return this->ap;
}

std::ostream& operator<<(std::ostream& os, const Character& vic)
{
	os << vic.getName() << " has " << vic.getAP() << " AP and ";
	if (vic.getWeapon())
		os << "wields a " << vic.getWeapon()->getName() << std::endl;
	else
		os << "is unarmed" << std::endl;
	return os;
}
