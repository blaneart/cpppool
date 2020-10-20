/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NukaNuka.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanar <ablanar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 17:17:41 by ablanar           #+#    #+#             */
/*   Updated: 2020/10/20 17:18:57 by ablanar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NukaNuka.hpp"

NukaNuka::NukaNuka() :
	AWeapon("Nuka-Nuka Launcher", 50, 40)
{

}

NukaNuka::~NukaNuka()
{
}

NukaNuka::NukaNuka(const NukaNuka& other):
	AWeapon(other)
{

}

NukaNuka& NukaNuka::operator=(const NukaNuka& other)
{
	AWeapon::operator=(other);
	return *this;
}

void NukaNuka::attack() const
{
	std::cout << "* %^£@*&%^ BOOOOOOON *" << std::endl;
}
