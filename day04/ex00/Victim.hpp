#ifndef VICTIM_HPP
#define VICTIM_HPP
#include <iostream>

class Victim
{
	private:
		Victim();
		std::string name;
	public:
		Victim(std::string);
		~Victim();
		Victim(const Victim&);
		Victim& operator=(const Victim&);
		std::string getName( void ) const;
		virtual void getPolymorphed( void ) const;
};

std::ostream& operator<<(std::ostream& os, const Victim& vic);
#endif
