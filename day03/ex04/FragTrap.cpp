/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanar <ablanar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 20:30:40 by ablanar           #+#    #+#             */
/*   Updated: 2020/10/13 20:30:41 by ablanar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
{
	this->name = name;
	hp = 100;
	ep = 100;
	type = "FR4G-TP";
	max_hp = 100;
	max_ep = 100;
	lvl = 1;
	m_attack = 30;
	r_attack = 20;
	armor = 5;
	std::cout << "FragTrap constructor was called.\n";
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor was called.\n";
}

FragTrap::FragTrap(const FragTrap& other)
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

FragTrap& FragTrap::operator=(const FragTrap& other)
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

void  FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::string attacks[5] = {"slapped.", "put zero during correction.", "tickles.", "threw some rubbish. It was not bad, but it hurt emotionally.", "tells a joke. It was so terrible that it caused damage!"};
	int number;
	number = std::rand() % 5;
	if (ep < 25)
		std::cout << "Oh my, it was so pathetic! You need to take a break, you have no energy!" << std::endl;
	else
	{
		ep = ep - 25;
		std::cout << name << " " << attacks[number] << std::endl;
		if (number < 3)
		{
			this->meleeAttack(target);
		}
		else
			this->rangedAttack(target);
	}
}
