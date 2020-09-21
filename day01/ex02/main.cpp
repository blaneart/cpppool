/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanar <ablanar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 16:47:48 by ablanar           #+#    #+#             */
/*   Updated: 2020/09/21 16:47:57 by ablanar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int main()
{
	ZombieEvent lol;
	Zombie *exmpl;
	lol.setZombieType("ded");
	lol.randomChump();
	exmpl = lol.newZombie("Tank");
	exmpl->announce();
	delete exmpl;
	return 0;
}
