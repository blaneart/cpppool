/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanar <ablanar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 20:29:32 by ablanar           #+#    #+#             */
/*   Updated: 2020/10/13 20:29:34 by ablanar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	std::cout << "Let's test a FragTrap" << std::endl;

	FragTrap ftrap("Fraggie");

	std::cout << "Let's try a rangedAttack" << std::endl;
	ftrap.rangedAttack("enemy");
	std::cout << "Now, a melee attack" << std::endl;
	ftrap.meleeAttack("enemy");
	std::cout << "Now, let's try to get some damage" << std::endl;
	ftrap.takeDamage(0);
	ftrap.takeDamage(1);
	ftrap.takeDamage(50);
	std::cout << "This attack should kill Fraggie" << std::endl;
	ftrap.takeDamage(100);
	std::cout << "Let's do some repairs" << std::endl;
	ftrap.beRepaired(0);
	ftrap.beRepaired(1);
	ftrap.beRepaired(10);
	ftrap.beRepaired(200);
	std::cout << "And now, the funny attacks!" << std::endl;
	ftrap.vaulthunter_dot_exe("enemy");
	ftrap.vaulthunter_dot_exe("enemy");
	ftrap.vaulthunter_dot_exe("enemy");
	ftrap.vaulthunter_dot_exe("enemy");
	ftrap.vaulthunter_dot_exe("enemy");

	std::cout << "Now, let's test a ScavTrap" << std::endl;

	ScavTrap strap = ScavTrap("Scavvie");

	std::cout << "Let's try a rangedAttack" << std::endl;
	strap.rangedAttack("enemy");
	std::cout << "Now, a melee attack" << std::endl;
	strap.meleeAttack("enemy");
	std::cout << "Now, let's try to get some damage" << std::endl;
	strap.takeDamage(0);
	strap.takeDamage(1);
	strap.takeDamage(50);
	std::cout << "This attack should kill Scavvie" << std::endl;
	strap.takeDamage(100);
	std::cout << "Let's do some repairs" << std::endl;
	strap.beRepaired(0);
	strap.beRepaired(1);
	strap.beRepaired(10);
	strap.beRepaired(200);
	std::cout << "And now, the funny attacks!" << std::endl;
	strap.challengeNewcomer("enemy");
	strap.challengeNewcomer("enemy");
	strap.challengeNewcomer("enemy");
	strap.challengeNewcomer("enemy");
	strap.challengeNewcomer("enemy");
	return (0);
}
