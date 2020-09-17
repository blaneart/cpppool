/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: art <art@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 16:01:47 by art               #+#    #+#             */
/*   Updated: 2020/09/17 17:18:03 by ablanar          ###   ########.fr       */
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
