#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name)
{
	this->name = name;
	clap_name = name;
	hp = this->n_max_hp;
	ep = this->n_max_ep;
	max_hp = this->n_max_hp;
	max_ep = this->n_max_ep;
	clap_max_ep = this->max_ep;
	clap_max_hp = this->max_hp;
	m_attack = this->n_m_attack;
	r_attack = this->n_r_attack;
	armor = this->n_armor;
}

NinjaTrap::~NinjaTrap()
{

}

NinjaTrap::NinjaTrap(const NinjaTrap& other)
{
	this->name = other.name;
}

NinjaTrap& NinjaTrap::operator=(const NinjaTrap& other)
{
	this->name = other.name;
	return *this;
}

void NinjaTrap::ninjaShoebox(ClapTrap &target)
{
	std::cout << "Clap" << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap &target)
{
	std::cout << "Frag" << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap &target)
{
	std::cout << "Scav" << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap &target)
{
		std::cout << "Ninja" << std::endl;
}
