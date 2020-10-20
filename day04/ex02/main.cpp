#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int main()
{
	{
		std::cout << "Test from subject\n";
		ISpaceMarine* bob = new TacticalMarine;
		ISpaceMarine* jim = new AssaultTerminator;
		ISquad* vlc = new Squad;
		vlc->push(bob);
		vlc->push(jim);
		for (int i = 0; i < vlc->getCount(); ++i)
		{
			ISpaceMarine* cur = vlc->getUnit(i);
			cur->battleCry();
			cur->rangedAttack();
			cur->meleeAttack();
		}
		delete vlc;
	}

	// Squad tests
	{
		std::cout << "Squad tests\n";
		std::cout << "Test#1 Constructor\n";
		Squad s1;
		std::cout << "Test#2 Copy Constructor\n";
		Squad s2(s1);
		std::cout << "Test#3 Assignment operator\n";
		Squad s3;
		s3 = s1;
		{
			std::cout << "Test#4 destructot\n";
			Squad s4;
		}
		std::cout << "Test#5 Empty squad\n Number of squads ";
		std::cout << s1.getCount();
		std::cout << "\nTest#6 GetUnit with empty squad\n";
		if (s1.getUnit(0) == NULL)
			std::cout << "Null pointer returned\n";
		else
			std::cout << "Error\n";
		if (s1.getUnit(-1) == NULL)
			std::cout << "Null pointer returned\n";
		else
			std::cout << "Error\n";
		if (s1.getUnit(2) == NULL)
			std::cout << "Null pointer returned\n";
		else
			std::cout << "Error\n";
	// TacticalMarine tests
		std::cout << "Tactical Marine tests\n";
		std::cout << "Test#1 Constructor\n";
		TacticalMarine *t1 = new TacticalMarine;
		std::cout << "Test#2 Copy Constructor\n";
		TacticalMarine *t2 = new TacticalMarine(*t1);
		std::cout << "Test#3 Assignment operator\n";
		TacticalMarine *t3 = new TacticalMarine;;
		*t3 = *t1;
		(void)t2;
		{
			std::cout << "Test#4 destructot\n";
			TacticalMarine *t4 = new TacticalMarine;
			delete t4;
		}
		std::cout << "Test#5 battleCry\n";
		t1->battleCry();
		std::cout << "\nTest#6 rangedAttack\n";
		t1->rangedAttack();
		std::cout <<  "\nTest#6 meleeAttack\n";
		t1->meleeAttack();
		std::cout << "\nTest#7 clone\n";
		ISpaceMarine *t5 = t3->clone();
		(void) t5;
		std::cout << "Tests for AssaultTerminator\n";

		std::cout << "Test#1 Constructor\n";
		AssaultTerminator *a1 = new AssaultTerminator();

		std::cout << "Test#2 Copy Constructor\n";
		AssaultTerminator *a2 = new AssaultTerminator(*a1);

		std::cout << "Test#3 Assignment operator\n";
		AssaultTerminator *a3 = new AssaultTerminator();
		*a3 = *a2;
		{
			std::cout << "Test#4 destructot\n";
			AssaultTerminator *a4 = new AssaultTerminator;
			delete a4;
		}
		std::cout << "Test#5 battleCry\n";
		a1->battleCry();
		std::cout << "\nTest#6 rangedAttack\n";
		a1->rangedAttack();
		std::cout <<  "\nTest#6 meleeAttack\n";
		a1->meleeAttack();
		std::cout << "\nTest#7 clone\n";
		ISpaceMarine *a5 = a3->clone();
		(void) a5;

		std::cout << "\nTest push Tactical Marine in squad\n";
		s1.push(t1);
		std::cout << "Number of units: ";
		std::cout << s1.getCount() << std::endl;
		std::cout << "Check the address of unit in squad: ";
		std::cout << s1.getUnit(0) << " and " << t1 << std::endl;
		std::cout << "\nTest push Assault Terminator in squad\n";
		s1.push(a1);
		std::cout << "Number of units: ";
		std::cout << s1.getCount() << std::endl;
		std::cout << "Check the address of unit in squad: ";
		std::cout << s1.getUnit(1) << " and " << a1 << std::endl;

		std::cout << "Test for deep copy in copy constructor \nCreating new squad..\n";
		Squad *s4 =  new Squad(s1);
		std::cout << "Number of units in new squad: " << s4->getCount() << std::endl;
		std::cout << "Address of the first: " << s4->getUnit(0) << std::endl;
		std::cout << "The original address for first squad is: " << s1.getUnit(0) << std::endl;
		std::cout << "Address of the second one: " << s4->getUnit(1) << std::endl;;
		std::cout << "The original address for second squad is: " << s1.getUnit(1) << std::endl;
		std::cout << "Test destructor. Deleting new squad..\n";
		delete s4;
		std::cout << "Deleting the original..\n";
	}
	return 0;
}
