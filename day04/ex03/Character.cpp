#include "Character.hpp"

Character::Character(std::string name)
{
	this->name = name;
	count = 0;
}

Character::Character(const Character& other)
{
	this->name = other.getName();
	this->count = other.count;
	for (int i = 0; i < this->count; i++)
	{
		material[i] = other.material[i];
		i++;
	}
}

Character& Character::operator=(const Character& other)
{
	this->name = other.getName();
	for (int i = 0; i < this->count; i++)
		delete this->material[i];
	this->count = other.count;
	for (int i = 0; i < this->count; i++)
		this->material[i] = other.material[i];
	return *this;
}

Character::~Character()
{
	for (int i = 0; i < this->count; i++)
		delete this->material[i];
}

std::string const & Character::getName() const
{
	return this->name;
}

void Character::equip(AMateria *m)
{
	if (this->count < 4)
	{
		for (int i = 0; i < this->count; i++)
			if (m == this->material[i])
				return ;
		this->material[this->count] = m;
		this->count += 1;
	}
}

void Character::unequip(int idx)
{
	if (idx > this->count)
		return ;
	this->count -= 1;
	for (int i = idx; i < this->count; i++)
	{
		this->material[i] = this->material[i + 1];
		this->material[i + 1] = NULL;
	}
}

void Character::use(int idx, ICharacter & target)
{
	if (idx < this->count)
		this->material[idx]->use(target);

}
