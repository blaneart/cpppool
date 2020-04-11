#ifndef PEON_HPP
#define PEON_HPP
#include <iostream>
#include "Victim.hpp"

class Peon : public Victim
{
	private:
		Peon();
		std::string name;
	public:
		Peon(std::string);
		~Peon();
		Peon(const Peon&);
		Peon& operator=(const Peon&);
		void getPolymorphed( void ) const;
};
#endif
