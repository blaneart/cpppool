/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanar <ablanar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 15:51:58 by ablanar           #+#    #+#             */
/*   Updated: 2020/10/16 15:52:25 by ablanar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure():
	AMateria("cure")
{
}

Cure::Cure(const Cure& other) :
	AMateria(other)
{

}

Cure& Cure::operator=(const Cure& other)
{
	AMateria::operator=(other);
	return *this;
}

Cure::~Cure()
{
}

AMateria *Cure::clone() const
{
	AMateria *buf = new Cure(*this);
	return buf;
}

void Cure::use(ICharacter & target)
{
	AMateria::use(target);
	std::cout << "* heals "<< target.getName() << "’s wounds *" <<std::endl;

}
