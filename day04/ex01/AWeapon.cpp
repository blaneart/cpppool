/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanar <ablanar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 17:53:26 by ablanar           #+#    #+#             */
/*   Updated: 2020/10/14 19:18:29 by ablanar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage):
	name(name), apcost(apcost), damage(damage)
{
}

AWeapon::~AWeapon()
{
}

AWeapon::AWeapon(const AWeapon& other):
	name(other.name), apcost(other.apcost), damage(other.damage)
{
}

AWeapon& AWeapon::operator=(const AWeapon& other)
{
	this->name = other.getName();
	this->apcost = other.getAPCost();
	this->damage = other.getDamage();
	return *this;
}

std::string const AWeapon::getName() const
{
	return this->name;
}

int AWeapon::getAPCost() const
{
	return this->apcost;
}

int AWeapon::getDamage() const
{
	return this->damage;
}
