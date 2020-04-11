#ifndef SORCERER_HPP
#define SORCERER_HPP
#include "Victim.hpp"
#include <iostream>

class Sorcerer
{
	private:
		Sorcerer();
		std::string name;
		std::string title;
	public:
		Sorcerer(std::string, std::string);
		~Sorcerer();
		Sorcerer(const Sorcerer&);
		Sorcerer& operator=(const Sorcerer&);
		std::string getName( void ) const;
		std::string getTitle( void ) const;
		void polymorph(Victim const&);
};
std::ostream& operator<<(std::ostream& os, const Sorcerer& scr);
#endif
