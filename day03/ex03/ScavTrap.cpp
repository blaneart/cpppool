/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanar <ablanar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 20:30:23 by ablanar           #+#    #+#             */
/*   Updated: 2020/10/13 20:30:24 by ablanar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
	this->name = name;
	hp = 100;
	ep = 50;
	type = "SC4V-TP";
	max_hp = 100;
	max_ep = 50;
	lvl = 1;
	m_attack = 20;
	r_attack = 15;
	armor = 3;
	std::cout << " constructor was called.\n";
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap says bye from destructor.\n";
}

ScavTrap::ScavTrap(const ScavTrap& other)
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
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
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
