/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanar <ablanar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 17:52:56 by ablanar           #+#    #+#             */
/*   Updated: 2020/10/19 14:42:27 by ablanar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string name):
	Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

Peon::Peon(const Peon& other):
	Victim(other)
{
	std::cout << "Zog zog." << std::endl;
}

Peon& Peon::operator=(const Peon& other)
{
	Victim::operator=(other);
	return *this;
}

void Peon::getPolymorphed( void ) const
{
	std::cout << this->getName() << " has been turned into a pink pony!" << std::endl;
}
