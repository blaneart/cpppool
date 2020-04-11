#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
	this->name = name;
	this->hp = this->max_hp;
	this->ep = this->max_ep;
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

void ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << name << " attacks " << target << " at range, causing "
				<< r_attack << " points of damage!" << std::endl;
}

void ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << name << " attacks " << target << ", causing "
				<< m_attack << " points of damage!" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	this->hp = this->hp - (amount - this->armor);
	if (this->hp < 0)
		this->hp = 0;
	std::cout << "FR4G-TP " << name << " took " << amount << " damage!"
			<< " Due to reduction of " << armor << ", now it has " << hp
			<< " health points " << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
	this->hp = this->hp + amount;
	if (this->hp > max_hp)
		this->hp = max_hp;
	std::cout << "FR4G-TP " << name << " has been repaired for " << amount
				<< " health points! Now it has " << hp << " health points." << std::endl;
}

void  ScavTrap::challengeNewcomer( void )
{
	std::string challenges[5] = {"Funny challange1", "Funny challange2", "Funny challange3", "Funny rchal1", "Funny rattack2"};
	int number;
	number = std::rand() % 5;
	std::cout << challenges[number] << std::endl;
}
