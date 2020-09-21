/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanar <ablanar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 16:48:38 by ablanar           #+#    #+#             */
/*   Updated: 2020/09/21 16:48:40 by ablanar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
{
	this->zombies = new Zombie[n];
	this->n = n;
	std::string names[6] = {"Boomer", "Hunter", "Smoker", "Tank", "Charger", "Witch"};
	int i = 0;
	int number;
	std::srand(time(NULL));
	while (i < n)
	{
		number = std::rand() % 6;
		zombies[i].setName(names[number]);
		zombies[i].setType("horde");
		i++;
	}
}

ZombieHorde::~ZombieHorde(void)
{
	delete [] this->zombies;
}


void ZombieHorde::announce(void)
{
	int i = 0;

	while (i < this->n)
	{
		this->zombies[i].announce();
		i++;
	}
}
