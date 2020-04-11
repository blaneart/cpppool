#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name):
 	FragTrap(name), NinjaTrap(name)
{
	this->name = name;
	clap_name = name;
	hp = this->FragTrap::f_max_hp;
	ep = this->NinjaTrap::n_max_ep;
	max_hp = this->FragTrap::f_max_hp;
	max_ep = this->NinjaTrap::n_max_ep;
	clap_max_ep = this->max_ep;
	clap_max_hp = this->max_hp;
	m_attack = this->NinjaTrap::n_m_attack;
	r_attack = this->FragTrap::f_r_attack;
	armor = this->FragTrap::f_armor;
}

SuperTrap::~SuperTrap()
{

}

SuperTrap::SuperTrap(const SuperTrap& other):
	FragTrap(other.name), NinjaTrap(other.name)
{
	this->name = other.name;
}

SuperTrap& SuperTrap::operator=(const SuperTrap& other)
{
	this->name = other.name;
	return *this;
}
