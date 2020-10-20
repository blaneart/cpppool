/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fire.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanar <ablanar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 17:31:34 by ablanar           #+#    #+#             */
/*   Updated: 2020/10/20 17:37:44 by ablanar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fire.hpp"

Fire::Fire() :
	AMateria("fire")
{
}

Fire::Fire(const Fire& other) :
	AMateria(other)
{

}

Fire& Fire::operator=(const Fire& other)
{
	AMateria::operator=(other);
	return *this;
}

Fire::~Fire()
{
}

AMateria *Fire::clone() const
{
	AMateria *buf = new Fire(*this);
	return buf;
}

void Fire::use(ICharacter & target)
{
	AMateria::use(target);
	std::cout << "* lights up the fire underneath "<< target.getName() << " *" <<std::endl;

}
