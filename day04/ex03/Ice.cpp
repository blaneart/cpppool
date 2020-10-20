/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanar <ablanar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 16:06:24 by ablanar           #+#    #+#             */
/*   Updated: 2020/10/16 16:06:25 by ablanar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() :
	AMateria("ice")
{
}

Ice::Ice(const Ice& other) :
	AMateria(other)
{

}

Ice& Ice::operator=(const Ice& other)
{
	AMateria::operator=(other);
	return *this;
}

Ice::~Ice()
{
}

AMateria *Ice::clone() const
{
	AMateria *buf = new Ice(*this);
	return buf;
}

void Ice::use(ICharacter & target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at "<< target.getName() << " *" <<std::endl;

}
