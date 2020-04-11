#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
{
	this->name = name;
	this->apcost = apcost;
	this->damage = damage;
}

AWeapon::~AWeapon()
{
}

AWeapon::AWeapon(const AWeapon& other)
{
	this->name = other.getName();
	this->apcost = other.getAPCost();
	this->name = other.getDamage();
}

AWeapon& AWeapon::operator=(const AWeapon& other)
{
	this->name = other.getName();
	this->apcost = other.getAPCost();
	this->name = other.getDamage();
	return *this;
}

std::string const AWeapon::getName() const
{
	return this->name;
}

int AWeapon::getAPCost() const
{
	return this->apcost;
}

int AWeapon::getDamage() const
{
	return this->damage;
}
