#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(std::string type)
{
	this->type = type;
	return ;
}

ZombieEvent::~ZombieEvent( void )
{
	return ;
}

void	ZombieEvent::setZombieType(std::string type)
{
	this->type = type;
}

Zombie*	ZombieEvent::newZombie(std::string name)
{
	Zombie *ptr;

	ptr = new Zombie(name, this->type);
	return (ptr);
}
void	ZombieEvent::randomChump()
{
	std::string names[6] = {"Boomer", "Hunter", "Smoker", "Tank", "Charger", "Witch"};
	std::srand(time(NULL));
	int number = rand() % 6;
	Zombie dead(names[number], this->type);
	dead.announce();
}
