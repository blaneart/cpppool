/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanar <ablanar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 20:30:15 by ablanar           #+#    #+#             */
/*   Updated: 2020/10/13 20:30:15 by ablanar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name)
{
	this->name = name;
	hp = 60;
	ep = 120;
	max_hp = 60;
	max_ep = 120;
	lvl = 1;
	m_attack = 60;
	r_attack = 5;
	armor = 0;
	type = "NIN6-TP";
	std::cout << "NinjaTrap constructor was called.\n";
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "NinjaTrap destructor was called.\n";
}

NinjaTrap::NinjaTrap(const NinjaTrap& other)
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
NinjaTrap& NinjaTrap::operator=(const NinjaTrap& other)
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
void NinjaTrap::ninjaShoebox(ClapTrap &target)
{
	if (ep < 25)
		std::cout << "Don't worry, it happens. You need to rest!" << std::endl;
	else
	{
		ep = ep - 25;
		std::cout << type<< " " << name  << " attacks ClapTrap with super ninja cool attack!" << std::endl;
		target.takeDamage(m_attack);
	}
}

void NinjaTrap::ninjaShoebox(FragTrap &target)
{

	if (ep < 25)
		std::cout << "Don't worry, it happens. You need to rest!" << std::endl;
	else
	{
		ep = ep - 25;
		std::cout << type<< " " << name  << " attacks FR4G-TP with super ninja cool attack!" << std::endl;
		target.takeDamage(m_attack);
	}
}

void NinjaTrap::ninjaShoebox(ScavTrap &target)
{
	if (ep < 25)
		std::cout << "Don't worry, it happens. You need to rest!" << std::endl;
	else
	{
		ep = ep - 25;
		std::cout << type << " " << name << " attacks SC4V-TP with another super ninja cool attack!" << std::endl;
		target.takeDamage(r_attack);
	}
}

void NinjaTrap::ninjaShoebox(NinjaTrap &target)
{
	if (ep < 25)
		std::cout << "Don't worry, it happens. You need to rest!" << std::endl;
	else
	{
		ep = ep - 25;
		std::cout << type << " " << name << " attacks NIN6-TP with attack prepared specially for ninjas!" << std::endl;
		target.takeDamage(r_attack);
	}
}
