/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanar <ablanar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 20:28:58 by ablanar           #+#    #+#             */
/*   Updated: 2020/10/13 20:28:59 by ablanar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) :
	hp(100), max_hp(100), ep(50), max_ep(50), lvl(1), name(name), m_attack(20), r_attack(15), armor(3)
{
	std::cout << "ScavTrap says hello from constructor.\n";
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap says bye from destructor.\n";
}

ScavTrap::ScavTrap(const ScavTrap& other) :
	hp(other.hp), max_hp(other.max_hp), ep(other.ep), max_ep(other.max_ep), lvl(other.lvl), name(other.name), m_attack(other.m_attack), r_attack(other.r_attack), armor(other.armor)
{
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	name = other.name;
	hp = other.hp;
	ep = other.ep;
	max_hp = other.max_hp;
	max_ep = other.max_ep;
	lvl = other.lvl;
	m_attack = other.m_attack;
	r_attack = other.r_attack;
	armor = other.armor;
	return *this;
}

void ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "SC4V-TP " << name << " attacks " << target << " at range, causing "
				<< r_attack << " points of damage!" << std::endl;
}

void ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "SC4V-TP " << name << " attacks " << target << ", causing "
				<< m_attack << " points of damage!" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	unsigned int realDamage;
	if (amount < this->armor)
		realDamage = 0;
	else
		realDamage = amount - this->armor;
	if (hp <= realDamage)
		hp = 0;
	else
		this->hp = this->hp - realDamage;
	std::cout << "SC4V-TP " << name << " took " << amount << " damage!"
			<< " Due to reduction of " << armor << ", now it has " << hp
			<< " health points " << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
	unsigned int real;

	if (amount + hp > max_hp)
		real = this->max_hp - this->hp;
	else
		real = amount;
	hp = hp + real;
	std::cout << "SC4V-TP " << name << " has been repaired for " << amount
				<< " health points! Now it has " << hp << " health points." << std::endl;
}

void  ScavTrap::challengeNewcomer(std::string const & target)
{
	std::string challenges[5] = {"Challange for you: redo cub3d in assembly!", "Do your correction with your eyes closed!", "Can you pass your next exam with just one try?", "One day without coffee.", "Finish cpp piscine in one day!"};
	int number;
	number = std::rand() % 5;
	if (ep < 25)
		std::cout << "Don't worry, it happens. You need to rest!" << std::endl;
	else
	{
		ep = ep - 25;
		std::cout << "Hey, " << target << "! " << challenges[number] << std::endl;
	}
}
