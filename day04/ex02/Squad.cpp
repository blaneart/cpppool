#include "Squad.hpp"

Squad::Squad()
{
	this->count = 0;
	this->unit = NULL;
}

Squad::Squad(const Squad& other)
{
	int i;

	i = 0;
	this->count = other.getCount();
	this->unit = new ISpaceMarine*[this->count];
	i = 0;
	while (i < this->count)
	{
		this->unit[i] = other.getUnit(i)->clone();
		i++;
	}

}

Squad& Squad::operator=(const Squad& other)
{
	int i;

	i = 0;
	while (i < this->count)
	{
		delete this->getUnit(i);
		i++;
	}
	delete this->unit;
	this->count = other.getCount();
	this->unit = new ISpaceMarine*[this->count];
	i = 0;
	while (i < this->count)
	{
		this->unit[i] = other.getUnit(i)->clone();
		i++;
	}
	return *this;
}

Squad::~Squad()
{
	int i = 0;

	while (i < this->count)
	{
		delete this->unit[i];
		i++;
	}
}

int Squad::getCount() const
{
	return this->count;
}

ISpaceMarine *Squad::getUnit(int n) const
{
	if (n >= 0 && n < this->count)
		return this->unit[n];
	else
		return NULL;
}

int Squad::push(ISpaceMarine *marine)
{
	if (this->unit)
	{
		for (int i = 0; i < this->count; i++)
			if (marine == this->unit[i])
				return this->count;
		ISpaceMarine **buf = new ISpaceMarine*[this->count + 1];
		for (int i = 0; i < this->count; i++)
			buf[i] = this->unit[i];
		delete this->unit;
		buf[this->count] = marine;
		this->count = this->count + 1;
		this->unit = buf;
		return this->count;
	}
	else
	{
		this->unit = new ISpaceMarine*[1];
		this->count = 1;
		this->unit[0] = marine;
		return this->count;
	}
}
