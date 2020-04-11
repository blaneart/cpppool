#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
	this->name = name;
	clap_name = name;
	hp = this->s_max_hp;
	ep = this->s_max_ep;
	max_hp = this->s_max_hp;
	max_ep = this->s_max_ep;
	clap_max_ep = this->max_ep;
	clap_max_hp = this->max_hp;
	m_attack = this->s_m_attack;
	r_attack = this->s_r_attack;
	armor = this->s_armor;
}

ScavTrap::~ScavTrap()
{
}

ScavTrap::ScavTrap(const ScavTrap& other)
{
	this->name = other.name;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	this->name = other.name;
	return *this;
}

void  ScavTrap::challengeNewcomer( void )
{
	std::string challenges[5] = {"Funny challange1", "Funny challange2", "Funny challange3", "Funny rchal1", "Funny rattack2"};
	int number;
	number = std::rand() % 5;
	std::cout << challenges[number] << std::endl;
}
