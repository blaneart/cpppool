#ifndef AMATERIA_HPP
#define AMATERIA_HPP
class AMateria;
#include "ICharacter.hpp"
#include <iostream>

class AMateria
{
	private:
		std::string type;
		unsigned int _xp;
	public:
		AMateria(std::string const & type);
		AMateria(const AMateria &);
		AMateria & operator=(const AMateria &);
		virtual ~AMateria();
		std::string const & getType() const;
		unsigned int getXP() const;
		void setXP(unsigned int);
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter & traget);
};

#endif
