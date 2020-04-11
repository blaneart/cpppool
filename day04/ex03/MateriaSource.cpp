#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	this->count = 0;
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
	this->count = other.count;
	for (int i = 0; i < this->count; i++)
		this->m[i] = other.m[i];
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
	for (int i = 0; i < this->count; i++)
		delete this->m[i];
	this->count = other.count;
	for (int i = 0; i < this->count; i++)
		this->m[i] = other.m[i];
	return *this;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < this->count; i++)
		delete this->m[i];
}

void MateriaSource::learnMateria(AMateria* m)
{
	if (this->count < 3)
	{
		this->m[this->count] = m;
		this->count += 1;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < this->count; i++)
		if (type == this->m[i]->getType())
			return this->m[i]->clone();
	return 0;
}
