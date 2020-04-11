#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP
# include "Zombie.hpp"

class ZombieEvent
{
	public:
		ZombieEvent(std::string = "");
		~ZombieEvent( void );
		void	setZombieType(std::string);
		Zombie*	newZombie(std::string name);
		void	randomChump( void );
	private:
		std::string type;
};
#endif
