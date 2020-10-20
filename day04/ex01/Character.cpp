/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanar <ablanar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 18:54:42 by ablanar           #+#    #+#             */
/*   Updated: 2020/10/19 15:53:39 by ablanar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name) :
	name(name), ap(40), wp(NULL)
{
}

Character::Character(const Character &other):
	name(other.name), ap(other.ap), wp(other.wp)
{
}

Character& Character::operator=(const Character &other)
{
	this->name = other.name;
	this->ap = other.ap;
	this->wp = other.wp;
	return *this;
}

Character::~Character()
{
}

void Character::recoverAP()
{
	this->ap = this->ap + 10;
	if (this->ap > 40)
		this->ap = 40;
}

void Character::equip(AWeapon *gun)
{
	if (gun == NULL)
		return ;
	this->wp = gun;
}

void Character::attack(Enemy *frag)
{
	if (frag == NULL)
		return ;
	if (frag && this->wp && this->ap >= this->wp->getAPCost())
	{
		std::cout << this->getName() << " attacks "
				<< frag->getType() << " with a " << this->wp->getName()
				<< std::endl;
		this->wp->attack();
		frag->takeDamage(this->wp->getDamage());
		if (frag->getHP() <= 0)
		{
			delete frag;
			frag = NULL;
		}
		this->ap = this->ap - this->wp->getAPCost();
	}
}

std::string const Character::getName() const
{
	return this->name;
}

AWeapon *Character::getWeapon() const
{
	return this->wp;
}

int Character::getAP() const
{
	return this->ap;
}

std::ostream& operator<<(std::ostream& os, const Character& vic)
{
	os << vic.getName() << " has " << vic.getAP() << " AP and ";
	if (vic.getWeapon())
		os << "wields a " << vic.getWeapon()->getName() << std::endl;
	else
		os << "is unarmed" << std::endl;
	return os;
}
