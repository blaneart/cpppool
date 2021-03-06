/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanar <ablanar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 20:28:21 by ablanar           #+#    #+#             */
/*   Updated: 2020/10/13 20:28:22 by ablanar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
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

	std::cout << "Now let's test a copy constructor" << std::endl;
	FragTrap ftrap2(ftrap);
	ftrap2.takeDamage(6);

	std::cout << "... And the assignment operator overload" << std::endl;
	FragTrap ftrap3 = ftrap2;
	ftrap3.takeDamage(10);
	return 0;

}
