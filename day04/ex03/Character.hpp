#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include <iostream>
#include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		AMateria *material[4];
		std::string name;
		int count;
	public:
		Character(std::string name);
		Character(const Character&);
		Character& operator=(const Character&);
		~Character();
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};
#endif