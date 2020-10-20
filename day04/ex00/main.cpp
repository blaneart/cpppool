/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablanar <ablanar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/14 17:52:01 by ablanar           #+#    #+#             */
/*   Updated: 2020/10/19 14:41:28 by ablanar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Victim.hpp"
#include "Sorcerer.hpp"
#include "Peon.hpp"
#include "Frog.hpp"

int main()
{
	{
	std::cout << "Tests from the subject\n";
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);
	}
	// Sorcerer Tests
	{
	std::cout << "Test for sorcerers\n";
	std::cout << "\nTest#1 Constructor\n";
	Sorcerer mine("Sorcerer1", "Just for tests");
	std::cout << "\nTest#2 Copy\n";
	Sorcerer mine2(mine);
	std::cout << "\nTest#3 Assignment\n";
	Sorcerer mine3 = mine2;
	std::cout << "\nTest#4 << overload\n";
	std::cout << mine3;
	std::cout << "\nTest#5 destructor for all three sorcerers\n";
	}

	// Victim tests
	{
		std::cout << "Test for victims\n";
		std::cout << "\nTest#1 Constructor\n";
		Victim vic("Victim1");
		std::cout << "\nTest#2 Copy\n";
		Victim vic2(vic);
		std::cout << "\nTest#3 Assignment\n";
		Victim vic3 = vic2;
		std::cout << "\nTest#4 << overload\n";
		std::cout << vic3;
		std::cout << "\nTest#5 destructor for all three victims\n";
	}
	// Polymorph on victim
	{
		std::cout << "\n Test for Polymorph by Sorcerer on victim\n";
		Sorcerer test_poly("Poly", "test");
		Victim new_vic("Poly");
		test_poly.polymorph(new_vic);
	}

	// Peon Tests
	{
		std::cout << "Test for Peon\n";
		std::cout << "\nTest#1 Constructor\n";
		Peon vic("Peon1");
		std::cout << "\nTest#2 Copy\n";
		Peon vic2(vic);
		std::cout << "\nTest#3 Assignment\n";
		Peon vic3 = vic2;
		std::cout << "\nTest#4 << overload\n";
		std::cout << vic3;
		std::cout << "\nTest#5 destructor for all three Peon\n";
	}
	// Peon get polymorph
	{
		std::cout << "\n Test for Polymorph by Sorcerer on peon\n";
		Sorcerer test_poly("Poly", "test");
		Peon new_vic("Peon");
		test_poly.polymorph(new_vic);
	}
	// Frog Tests
	{
		std::cout << "Test for Frog\n";
		std::cout << "\nTest#1 Constructor\n";
		Frog vic("Frog1");
		std::cout << "\nTest#2 Copy\n";
		Frog vic2(vic);
		std::cout << "\nTest#3 Assignment\n";
		Frog vic3 = vic2;
		std::cout << "\nTest#4 << overload\n";
		std::cout << vic3;
		std::cout << "\nTest#5 destructor for all three Peon\n";
	}
	// Peon get polymorph
	{
		std::cout << "\n Test for Polymorph by Sorcerer on frog\n";
		Sorcerer test_poly("Poly", "test");
		Frog new_vic("Frog");
		test_poly.polymorph(new_vic);
	}

	return 0;
}
