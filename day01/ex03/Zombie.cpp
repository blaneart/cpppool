/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanar <ablanar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 16:48:26 by ablanar           #+#    #+#             */
/*   Updated: 2020/09/21 16:48:28 by ablanar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type)
{
	this->name = name;
	this->type = type;
}

Zombie::~Zombie(void)
{
	std::cout << "Deleting " << name << " Zombie" << std::endl;
}

void Zombie::setName(std::string name)
{
	this->name = name;
}

void Zombie::setType(std::string type)
{
	this->type = type;
}

void Zombie::announce(void)
{
	std::cout << "<" << name << " (" << type <<")>" " Braiiiiiiinnnssss.." << std::endl;
}
