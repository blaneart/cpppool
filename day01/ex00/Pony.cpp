/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanar <ablanar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 16:47:24 by ablanar           #+#    #+#             */
/*   Updated: 2020/09/21 16:47:28 by ablanar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string myname, int old)
{
	name = myname;
	age = old;
}

Pony::~Pony( void )
{
	std::cout << name << " is dead." << std::endl;
}

void Pony::SayMyName( void )
{
	std::cout << "My name is "<< name << "." << std::endl;
}
void Pony::BirthDay( void )
{
	age++;
	std::cout << "It is " << name << "'s birthday! ";
	std::cout << "Now it is " << age << " years old." << std::endl;
}
