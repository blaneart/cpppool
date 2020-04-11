#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
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

FragTrap::~FragTrap()
{

}

FragTrap::FragTrap(const FragTrap& other)
{
	this->name = other.name;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	this->name = other.name;
	return *this;
}

void  FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::string attacks[5] = {"Funny mattack1", "Funny mattack2", "Funny mattack3", "Funny rattacak1", "Funny rattack2"};
	int number;
	number = std::rand() % 5;
	if (ep < 25)
		std::cout << "No energy!" << std::endl;
	else
	{
		ep = ep - 25;
		std::cout << attacks[number] << std::endl;
		if (number < 3)
			this->meleeAttack(target);
		else
			this->rangedAttack(target);
	}
}
