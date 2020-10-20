/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanar <ablanar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 14:43:46 by ablanar           #+#    #+#             */
/*   Updated: 2020/10/20 17:30:39 by ablanar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Enemy.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "GiantBee.hpp"
#include "NukaNuka.hpp"
int main()
{
	{
	std::cout << "Test from subject\n";
	Character* me = new Character("me");
	std::cout << *me;
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	}
	// AWeapon Tests
	// PlasmaRifle
	{
		std::cout << "\nTests for PlasmaRifle\n";
		std::cout << "Test#1 Constructor\n";
		PlasmaRifle weapon;
		std::cout << "Test#2 copy Constructor\n";
		PlasmaRifle weapon2(weapon);
		std::cout << "Test#3 Assignment operator\n";
		PlasmaRifle weapon3 = weapon2;
		std::cout << "Test#4 Get name\n";
		std::cout << weapon3.getName();
		std::cout << "\nTest#5 Get AP cost\n";
		std::cout << weapon3.getAPCost();
		std::cout << "\nTest#6 Get Damage\n";
		std::cout << weapon3.getDamage();
		std::cout << "\nTest#7 attack!\n";
		weapon3.attack();
	}
	{
		std::cout << "\nTests for PowerFist\n";
		std::cout << "Test#1 Constructor\n";
		PowerFist weapon;
		std::cout << "Test#2 copy Constructor\n";
		PowerFist weapon2(weapon);
		std::cout << "Test#3 Assignment operator\n";
		PowerFist weapon3 = weapon2;
		std::cout << "Test#4 Get name\n";
		std::cout << weapon3.getName();
		std::cout << "\nTest#5 Get AP cost\n";
		std::cout << weapon3.getAPCost();
		std::cout << "\nTest#6 Get Damage\n";
		std::cout << weapon3.getDamage();
		std::cout << "\nTest#7 attack!\n";
		weapon3.attack();
	}
	{
		std::cout << "\nTests for NukaNuka Launcher\n";
		std::cout << "Test#1 Constructor\n";
		NukaNuka weapon;
		std::cout << "Test#2 copy Constructor\n";
		NukaNuka weapon2(weapon);
		std::cout << "Test#3 Assignment operator\n";
		NukaNuka weapon3 = weapon2;
		std::cout << "Test#4 Get name\n";
		std::cout << weapon3.getName();
		std::cout << "\nTest#5 Get AP cost\n";
		std::cout << weapon3.getAPCost();
		std::cout << "\nTest#6 Get Damage\n";
		std::cout << weapon3.getDamage();
		std::cout << "\nTest#7 attack!\n";
		weapon3.attack();
	}
	//Enemies Tests
	//SuperMutant tests
	{
		std::cout << "\nTests for SuperMutant\n";
		std::cout << "Test#1 Constructor\n";
		SuperMutant sup;
		std::cout << "Test#2 copy Constructor\n";
		SuperMutant sup2(sup);
		std::cout << "Test#3 Assignment operator\n";
		SuperMutant sup3 = sup2;
		std::cout << "Test#4 Get type\n";
		std::cout << sup3.getType();
		std::cout << "\nTest#5 Get HP\n";
		std::cout << sup3.getHP();
		std::cout << "\nTest#6 take 5 Damage\n";
		sup3.takeDamage(5);
		std::cout << "Now it has "<< sup3.getHP() << "\n" ;
		std::cout << "Test#7 All three SuperMutants destructors\n";
	}
	//RadScorpion tests
	{
		std::cout << "\nTests for RadScorpion\n";
		std::cout << "Test#1 Constructor\n";
		RadScorpion sup;
		std::cout << "Test#2 copy Constructor\n";
		RadScorpion sup2(sup);
		std::cout << "Test#3 Assignment operator\n";
		RadScorpion sup3 = sup2;
		std::cout << "Test#4 Get type\n";
		std::cout << sup3.getType();
		std::cout << "\nTest#5 Get HP\n";
		std::cout << sup3.getHP();
		std::cout << "\nTest#6 take 5 Damage\n";
		sup3.takeDamage(5);
		std::cout << "Now it has "<< sup3.getHP() << "\n" ;
		std::cout << "Test#7 All three RadScorpions destructors\n";
	}
	//Giant Bee tests
	{
		std::cout << "\nTests for Giant bees\n";
		std::cout << "Test#1 Constructor\n";
		GiantBee sup;
		std::cout << "Test#2 copy Constructor\n";
		GiantBee sup2(sup);
		std::cout << "Test#3 Assignment operator\n";
		GiantBee sup3 = sup2;
		std::cout << "Test#4 Get type\n";
		std::cout << sup3.getType();
		std::cout << "\nTest#5 Get HP\n";
		std::cout << sup3.getHP();
		std::cout << "\nTest#6 take 5 Damage\n";
		sup3.takeDamage(5);
		std::cout << "Now it has "<< sup3.getHP() << "\n" ;
		std::cout << "Test#7 All three Giant bees destructors\n";
	}
	// Character tests
	{
		std::cout << "\nTests for Character\n";
		std::cout << "Test#1 Constructor\n";
		Character sup("John");
		std::cout << "Test#2 copy Constructor\n";
		Character sup2(sup);
		std::cout << "Test#3 Assignment operator\n";
		Character sup3 = sup2;
		std::cout << "Test#4 Get ap\n";
		std::cout << sup3.getAP();
		std::cout << "\nTest#5 << overload without weapon\n";
		std::cout << sup;
		std::cout << "\nTest#6 equip PlasmaRifle\n";
		PlasmaRifle *weapon = new PlasmaRifle;
		sup3.equip(weapon);
		std::cout << sup3;
		std::cout << "Test#7 get name\n";
		std::cout << sup3.getName();
		std::cout << "\nTest#8 attack enemy with PlasmaRifle\n";
		SuperMutant *enemy = new SuperMutant;
		RadScorpion *enemy2 = new RadScorpion;
		sup3.attack(enemy);
		sup3.attack(enemy2);
		std::cout << "Test#9 restore AP\n";
		std::cout << sup3.getAP() << std::endl;
		sup3.recoverAP();
		std::cout << "After recovery" << sup3.getAP() << std::endl;
		std::cout << "\nRecover with full AP..\n";
		sup3.recoverAP();
		sup3.recoverAP();
		std::cout << "still " <<sup3.getAP() << std::endl;
		std::cout << "Test#10 Killing enemy..\n";
		sup3.attack(enemy2);
		sup3.attack(enemy2);
		sup3.attack(enemy2);
		std::cout << "Test#11 trying to attack without a weapon\n";
		std::cout << "Enemy's hp before attack\n";
		std::cout << enemy->getHP() << std::endl;
		sup.attack(enemy);
		std::cout << "Enemy's hp after attack\n";
		std::cout << enemy->getHP() << std::endl;
		PowerFist *weapon2 = new PowerFist;
		std::cout << "Test#12 Equip PowerFist\n";
		sup2.equip(weapon2);
		std::cout << sup2;
		std::cout << "Test#13 Attacking till got 0 AP\n";
		sup2.attack(enemy);
		std::cout << sup2.getAP() << std::endl;
		sup2.attack(enemy);
		std::cout << sup2.getAP() << std::endl;
		sup2.attack(enemy);
		std::cout << sup2.getAP() << std::endl;
		sup2.attack(enemy);
		std::cout << sup2.getAP() << std::endl;
		enemy = new SuperMutant;
		sup2.attack(enemy);
		std::cout << sup2.getAP() << std::endl;
		sup2.attack(enemy);
		std::cout << sup2.getAP() << std::endl;
		std::cout << "No attack happened.\nDeleting all allocated stuff.\n";
		delete enemy;
		delete weapon;
		delete weapon2;
	}

	return 0;
}
