#include "ZombieEvent.hpp"

int main()
{
	ZombieEvent lol;
	Zombie *exmpl;
	lol.setZombieType("ded");
	lol.randomChump();
	exmpl = lol.newZombie();
	exmpl->announce();
	delete exmpl;
	return 0;
}
