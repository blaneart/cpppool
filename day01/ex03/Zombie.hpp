#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{
	public:
		Zombie(std::string = "", std::string = "");
		~Zombie( void );
		void setName(std::string);
		void setType(std::string);
		void announce( void );
	private:
		std::string name;
		std::string type;
};
#endif
