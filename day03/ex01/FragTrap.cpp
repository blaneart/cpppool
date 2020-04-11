#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
{
	this->name = name;
	this->hp = this->max_hp;
	this->ep = this->max_ep;
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

void FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << name << " attacks " << target << " at range, causing "
				<< r_attack << " points of damage!" << std::endl;
}

void FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << name << " attacks " << target << ", causing "
				<< m_attack << " points of damage!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	this->hp = this->hp - (amount - this->armor);
	if (this->hp < 0)
		this->hp = 0;
	std::cout << "FR4G-TP " << name << " took " << amount << " damage!"
			<< " Due to reduction of " << armor << ", now it has " << hp
			<< " health points " << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
	this->hp = this->hp + amount;
	if (this->hp > max_hp)
		this->hp = max_hp;
	std::cout << "FR4G-TP " << name << " has been repaired for " << amount
				<< " health points! Now it has " << hp << " health points." << std::endl;
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
