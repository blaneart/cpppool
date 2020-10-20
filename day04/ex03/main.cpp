#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Fire.hpp"
#include <unistd.h>
int main()
{
	{
		std::cout << "Tests from subject\n";
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);
		delete bob;
		delete me;
		delete src;
	}

	{
		std::cout << "Test for ice\n";
		std::cout << "Test#1 Constructor\n";
		Ice i1;
		std::cout << "Test#2 get type\n";
		std::cout << i1.getType();
		std::cout << "\nTest#3 get xp\n";
		std::cout << i1.getXP();

		std::cout << "\nTest#4 copy constructor\n";
		Ice i2(i1);
		std::cout << "\nTest#5 Assignment operator\n";
		Ice i3;
		i3 = i2;
		{
			std::cout << "Test#6 Destructor\n";
			Ice i4;
		}
		std::cout << "Ice use modifies xp\n";
		Character dummy = Character("Dummy");
		i3.use(dummy);
		std::cout << "Now it got " << i3.getXP() << " xp\n";

		std::cout << "Ice copy xp check\n";
		Ice i5(i3);
		std::cout << "New ice got " << i5.getXP() << " xp\n";
		std::cout << "Ice Assignment xp check\n";
		Ice i6;
		i6 = i3;
		std::cout << "New ice got " << i6.getXP() << " xp\n";

		AMateria *i7 = i6.clone();
		delete i7;

		std::cout << "Test for cure\n";
		std::cout << "Test#1 Constructor\n";
		Cure c1;
		std::cout << "Test#2 get type\n";
		std::cout << c1.getType();
		std::cout << "\nTest#3 get xp\n";
		std::cout << c1.getXP();

		std::cout << "\nTest#4 copy constructor\n";
		Cure c2(c1);
		std::cout << "\nTest#5 Asscgnment operator\n";
		Cure c3;
		c3 = c2;
		{
			std::cout << "Test#6 Destructor\n";
			Cure c4;
		}
		std::cout << "Cure use modifies xp\n";
		c3.use(dummy);
		std::cout << "Now it got " << c3.getXP() << " xp\n";

		std::cout << "Cure copy xp check\n";
		Cure c5(c3);
		std::cout << "New cure got " << c5.getXP() << " xp\n";
		std::cout << "Cure Assignment xp check\n";
		Cure c6;
		c6 = c3;
		std::cout << "New cure got " << c6.getXP() << " xp\n";

		AMateria *c7 = c6.clone();
		delete c7;
		std::cout << "Test for fire\n";
		std::cout << "Test#1 Constructor\n";
		Fire f1;
		std::cout << "Test#2 get type\n";
		std::cout << f1.getType();
		std::cout << "\nTest#3 get xp\n";
		std::cout << f1.getXP();

		std::cout << "\nTest#4 copy constructor\n";
		Fire f2(f1);
		std::cout << "\nTest#5 Asscgnment operator\n";
		Fire f3;
		f3 = f2;
		{
			std::cout << "Test#6 Destructor\n";
			Fire f4;
		}
		std::cout << "Fire use modifies xp\n";
		f3.use(dummy);
		std::cout << "Now it got " << f3.getXP() << " xp\n";

		std::cout << "Fire copy xp check\n";
		Fire f5(f3);
		std::cout << "New fire got " << c5.getXP() << " xp\n";
		std::cout << "Fire Assignment xp check\n";
		Fire f6;
		f6 = f3;
		std::cout << "New fire got " << c6.getXP() << " xp\n";

		AMateria *f7 = f6.clone();
		delete f7;

		std::cout << "Test for character\n";
		Character h1("bob");
		std::cout << h1.getName() << std::endl;
		std::cout << "\nCopy constructor\n";
		Character h2(h1);
		std::cout << h2.getName() << "\n";
		std::cout << "Assignment operator\n";
		Character h3("not bob");
		h3 = h1;
		std::cout << h3.getName() << "\n";
		{
			Character h4("doesnt matter");
		}
		std::cout << "Test trying to use empty slots\n";
		h3.use(-1, h1);
		h3.use(0, h1);
		h3.use(1, h1);
		h3.use(2, h1);
		h3.use(3, h1);
		h3.use(100, h1);
		std::cout << "Nothing happened\n";
		ICharacter *target = new Character("Jim");
		AMateria *cure1 = new Cure();
		std::cout << "Trying to equip NULL pointer\n";
		h3.equip(NULL);
		std::cout << "Nothing happened\n";
		std::cout << "Character  equip() cure and use it on Jim\n";
		h3.equip(cure1);
		h3.use(0, *target);

		std::cout << "Testing deep copy in construction\n";
		Character h5 = Character("Erin");
		std::cout << "Creating new character named " << h5.getName();
		AMateria *ice2 = new Ice();
		AMateria *cure2 = new Ice();
		std::cout << "\nEquipped ice and cure..\n";
		h5.equip(ice2);
		h5.equip(cure2);
		std::cout << "Calling copy construcor..\n";
		Character h6(h5);
		std::cout << "Name of new character " << h6.getName();
		std::cout << "\n Calling use by new character..\n";
		h6.use(0, *target);

		std::cout << "Testing unequip..\n";
		h3.unequip(0);
		h3.unequip(1);
		h3.use(0, *target);
		h3.use(1, *target);
		h3.unequip(0);
		h3.unequip(1);
		h3.unequip(100);
		h3.unequip(-1);
		std::cout << "Cant use unequiped materia\n";
		std::cout << "Testing Assignment operator and using its materia\n";
		Character h7("Elisa");
		h7 = h6;
		h7.use(0, *target);
		h7.use(1, *target);
		std::cout << "Testing materia\n";
		std::cout << "Testing constructor\n";
		MateriaSource m1 = MateriaSource();
		m1.learnMateria(NULL);
		m1.createMateria("nothing");
		std::cout << "Testing copy constructor\n";
		MateriaSource m2(m1);
		std::cout << "Testing Assignment operator\n";

		MateriaSource m3 = MateriaSource();
		m3 = m2;
		m3.learnMateria(NULL);
		m3.createMateria("nothing");
		{
			std::cout << "Testing destructor\n";
			MateriaSource m4;
		}
		std::cout << "Testing learning and creating materia\n";
		AMateria *ice3 = new Ice();
		std::cout << "Learning ice..\n";
		m2.learnMateria(ice3);
		AMateria *newIce;
		std::cout << "Creating new ice..\n";
		newIce = m2.createMateria("ice");
		std::cout << newIce->getType() << "\n";
		std::cout << newIce->getXP() << "\n";
		std::cout << "Learing cure..\n";
		AMateria *cure3 = new Cure();
		m2.learnMateria(cure3);
		AMateria *newCure;
		newCure = m2.createMateria("cure");
		std::cout << newCure->getType() << "\n";
		std::cout << newCure->getXP() << "\n";
		std::cout << "Testing copy constructor with materia\n";
		MateriaSource m5(m2);
		AMateria *newCure2;
		newCure2 = m5.createMateria("cure");
		std::cout << newCure2->getType() << "\n";
		std::cout << newCure2->getXP() << "\n";
		std::cout << "Testing Assignment with materia";
		MateriaSource m6;
		m6 = m5;
		AMateria *newCure3;
		newCure3 = m6.createMateria("cure");
		std::cout << newCure3->getType() << "\n";
		std::cout << newCure3->getXP() << "\n";
		std::cout << "Testing with full MateriaSource\n";
		MateriaSource m8 = MateriaSource();
		m8.learnMateria(new Ice());
		m8.learnMateria(new Cure());
		m8.learnMateria(new Ice());
		m8.learnMateria(new Cure());
		AMateria *deadCure = new Cure();
		m8.learnMateria(deadCure);
		delete deadCure;
		std::cout << "Testing unkown materia with full inventory\n";
		m8.createMateria("Whatever");
		delete newCure;
		delete newCure2;
		delete newCure3;
		delete newIce;

	}
	return 0;
}
