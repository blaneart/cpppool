#ifndef ICE_HPP
#define ICE_HPP
#include <iostream>
#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		Ice(const Ice&);
		Ice& operator=(const Ice&);
		virtual ~Ice();
		AMateria* clone() const;
		void use(ICharacter & target);
};
#endif
