/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Frog.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanar <ablanar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 17:51:48 by ablanar           #+#    #+#             */
/*   Updated: 2020/10/19 14:42:24 by ablanar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Frog.hpp"

Frog::Frog(std::string name):
	Victim(name)
{
	std::cout << "Quack quack." << std::endl;
}

Frog::~Frog()
{
	std::cout << "Bloooop..." << std::endl;
}

Frog::Frog(const Frog& other):
	Victim(other)
{
	std::cout << "Quack quack." << std::endl;
}

Frog& Frog::operator=(const Frog& other)
{
	Victim::operator=(other);
	return *this;
}

void Frog::getPolymorphed( void ) const
{
	std::cout << this->getName() << " has been turned into a prince" << std::endl;
}
