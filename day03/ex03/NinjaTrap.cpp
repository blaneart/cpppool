#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name)
{
	this->name = name;
	clap_name = name;
	hp = this->f_max_hp;
	ep = this->f_max_ep;
	max_hp = this->f_max_hp;
	max_ep = this->f_max_ep;
	clap_max_ep = this->max_ep;
	clap_max_hp = this->max_hp;
	m_attack = this->f_m_attack;
	r_attack = this->f_r_attack;
	armor = this->f_armor;
}

NinjaTrap::~NinjaTrap()
{

}

NinjaTrap::NinjaTrap(const NinjaTrap& other)
{
	this->name = other.name;
}

void NinjaTrap::ninjaShoebox(ClapTrap &target)
{

}

void NinjaTrap::ninjaShoebox(FragTrap &target)
{
}

void NinjaTrap::ninjaShoebox(ScavTrap &target)
{
}

void NinjaTrap::ninjaShoebox(NinjaTrap &target)
{
}
