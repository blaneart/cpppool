/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanar <ablanar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 20:31:15 by ablanar           #+#    #+#             */
/*   Updated: 2020/10/13 20:31:15 by ablanar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name):
 	FragTrap(name), NinjaTrap(name)
{
	type = "SU7A-TP";
	hp = FragTrap::hp;
	max_hp = FragTrap::max_hp;
	ep = NinjaTrap::ep;
	max_ep = NinjaTrap::max_ep;
	lvl = 1;
	this->name = name;
	m_attack = NinjaTrap::m_attack;
	armor = NinjaTrap::armor;
	r_attack = FragTrap::r_attack;

	std::cout << "SuperTrap constructor called" << std::endl;
}

SuperTrap::~SuperTrap()
{
	std::cout << "SuperTrap destructor called" << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap& other):
	FragTrap(other.name), NinjaTrap(other.name)
{
	hp = other.hp;
	ep = other.ep;
	type = other.type;
	max_hp = other.max_hp;
	max_ep = other.max_ep;
	lvl = other.lvl;
	m_attack = other.m_attack;
	r_attack = other.r_attack;
	armor = other.armor;
}

SuperTrap& SuperTrap::operator=(const SuperTrap& other)
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

void SuperTrap::rangedAttack(std::string const & target)
{
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const & target)
{
	NinjaTrap::meleeAttack(target);
}
