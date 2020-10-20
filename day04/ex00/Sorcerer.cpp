/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanar <ablanar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 17:53:05 by ablanar           #+#    #+#             */
/*   Updated: 2020/10/16 17:56:50 by ablanar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title)
{
	this->name = name;
	this->title = title;
	std::cout << name << ", " << title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << this->name << ", " << this->title
		<< ", is dead. Consequences will never be the same!"
		<< std::endl;
}

Sorcerer::Sorcerer(const Sorcerer& other)
{
	this->name = other.name;
	this->title = other.title;
	std::cout << name << ", " << title << ", is born!" << std::endl;
}

Sorcerer& Sorcerer::operator=(const Sorcerer& other)
{
	this->name = other.name;
	this->title = other.title;
	return *this;
}

std::string Sorcerer::getName(void) const
{
	return this->name;
}

void getPolymorphed(void)
{

}
std::string Sorcerer::getTitle(void) const
{
	return this->title;
}

void Sorcerer::polymorph(Victim const& vict)
{
	vict.getPolymorphed();
}
std::ostream& operator<<(std::ostream& os, const Sorcerer& scr)
{
	os <<  "I am " << scr.getName() <<  ", " << scr.getTitle()
		<<  ", and I like ponies!" << std::endl;
	return os;
}
