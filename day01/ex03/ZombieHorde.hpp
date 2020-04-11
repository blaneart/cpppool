#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP
#include "Zombie.hpp"

class ZombieHorde
{
	public:
		ZombieHorde(int);
		~ZombieHorde( void );
		void announce( void );
	private:
		int		n;
		Zombie	*zombies;
};
#endif
