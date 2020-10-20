/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GiantBee.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanar <ablanar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 17:20:23 by ablanar           #+#    #+#             */
/*   Updated: 2020/10/20 17:24:26 by ablanar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GiantBee.hpp"

GiantBee::GiantBee() :
	Enemy(50, "Giant Bee")
{
	std::cout << "ZzzzZZzzzZZZ" << std::endl;
}

GiantBee::GiantBee(const GiantBee & other) :
	Enemy(other)
{
	std::cout << "ZzzzZZzzzZZZ" << std::endl;
}

GiantBee& GiantBee::operator=(GiantBee const & other)
{
	Enemy::operator=(other);
	return *this;
}

GiantBee::~GiantBee()
{
	std::cout << "Bzzbzbz.. bz.." << std::endl;
}

void GiantBee::takeDamage(int damage)
{
	int chance = rand() % 2;
	if (chance == 0)
		Enemy::takeDamage(damage);
}
