/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanar <ablanar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 20:29:11 by ablanar           #+#    #+#             */
/*   Updated: 2020/10/14 15:29:46 by ablanar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap inda house!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap outta house!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other):
  hp(other.hp), ep(other.ep), max_hp(other.max_hp),  max_ep(other.max_ep), lvl(other.lvl),name(other.name), m_attack(other.m_attack), r_attack(other.r_attack), armor(other.armor), type(other.type)
{
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	name = other.name;
	hp = other.hp;
	ep = other.ep;
	type = other.type;
	max_hp = other.max_hp;
	max_ep = other.max_ep;
	lvl = other.lvl;
	m_attack = other.m_attack;
	r_attack = other.r_attack;
	armor = other.armor;
	return *this;
}

void ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << type << " " << name << " attacks " << target << " at range, causing "
				<< r_attack << " points of damage!" << std::endl;
}

void ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << type << " " << name << " attacks " << target << ", causing "
				<< this->m_attack << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
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
	std::cout << type << " " << name << " took " << amount << " damage!"
			<< " Due to reduction of " << armor << ", now it has " << hp
			<< " health points " << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	unsigned int real;

	if (amount + hp > max_hp)
		real = this->max_hp - this->hp;
	else
		real = amount;
	hp = hp + real;
	std::cout << type << " " << name << " has been repaired for " << amount
				<< " health points! Now it has " << hp << " health points." << std::endl;
}
