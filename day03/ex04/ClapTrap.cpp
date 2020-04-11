#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	
	std::cout << "ClapTrap inda house!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap outta house!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	this->clap_name = other.clap_name;
}

void ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << clap_name << " attacks " << target << " at range, causing "
				<< r_attack << " points of damage!" << std::endl;
}

void ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << clap_name << " attacks " << target << ", causing "
				<< this->m_attack << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->hp = this->hp - (amount - this->armor);
	if (this->hp < 0)
		this->hp = 0;
	std::cout << "FR4G-TP " << clap_name << " took " << amount << " damage!"
			<< " Due to reduction of " << armor << ", now it has " << hp
			<< " health points " << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	this->hp = this->hp + amount;
	if (this->hp > max_hp)
		this->hp = max_hp;
	std::cout << "FR4G-TP " << clap_name << " has been repaired for " << amount
				<< " health points! Now it has " << hp << " health points." << std::endl;
}
