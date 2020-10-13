/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanar <ablanar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 20:28:04 by ablanar           #+#    #+#             */
/*   Updated: 2020/10/13 20:28:25 by ablanar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) :
	hp(100), max_hp(100), ep(100), max_ep(100), lvl(1), name(name), m_attack(30), r_attack(20), armor(5)
{
	std::cout << "FragTrap constructor was called.\n";
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor was called.\n";
}

FragTrap::FragTrap(const FragTrap& other) :
   hp(other.hp), max_hp(other.max_hp), ep(other.ep), max_ep(other.max_ep), lvl(other.lvl), name(other.name), m_attack(other.m_attack), r_attack(other.r_attack), armor(other.armor)
{
}

FragTrap& FragTrap::operator=(const FragTrap& other)
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
	unsigned int realDamage;
	if (amount < this->armor)
		realDamage = 0;
	else
		realDamage = amount - this->armor;
	if (hp <= realDamage)
		hp = 0;
	else
		this->hp = this->hp - realDamage;
	std::cout << "FR4G-TP " << name << " took " << amount << " damage!"
			<< " Due to reduction of " << armor << " it took just " << realDamage << " of damage. Now it has " << hp
			<< " health points." << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
	unsigned int real;

	if (amount + hp > max_hp)
		real = this->max_hp - this->hp;
	else
		real = amount;
	hp = hp + real;
	std::cout << "FR4G-TP " << name << " has been repaired for " << real
				<< " health points! Now it has " << hp << " health points." << std::endl;
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
