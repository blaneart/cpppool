/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanar <ablanar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 15:37:55 by ablanar           #+#    #+#             */
/*   Updated: 2020/10/16 16:17:35 by ablanar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type):
	type(type), _xp(0)
{
}

AMateria::AMateria(const AMateria& other):
	type(other.type), _xp(other._xp)
{
}

AMateria & AMateria::operator=(const AMateria& other)
{
	this->_xp = other._xp;
	return *this;
}

AMateria::~AMateria()
{
}

std::string const & AMateria::getType() const
{
	return this->type;
}

unsigned int AMateria::getXP() const
{
	return this->_xp;
}

void AMateria::setXP(unsigned int xp)
{
	this->_xp = xp;
}

void AMateria::use(ICharacter & target)
{
	this->_xp += 10;
	(void) target;
}
