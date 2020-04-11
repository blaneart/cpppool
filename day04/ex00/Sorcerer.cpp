#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title)
{
	this->name = name;
	this->title = title;
	std::cout << name << ", " << title << ", was born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << this->name << ", " << this->title
		<< ", is dead. Consequences will never be the same!"
		<< std::endl;
}

Sorcerer::Sorcerer(const Sorcerer& other)
{
	this->name = other.name;
	this->title = other.title;
}

Sorcerer& Sorcerer::operator=(const Sorcerer& other)
{
	this->name = other.name;
	this->title = other.title;
	return *this;
}

std::string Sorcerer::getName(void) const
{
	return this->name;
}

void getPolymorphed(void)
{

}
std::string Sorcerer::getTitle(void) const
{
	return this->title;
}

void Sorcerer::polymorph(Victim const& vict)
{
	vict.getPolymorphed();
}
std::ostream& operator<<(std::ostream& os, const Sorcerer& scr)
{
	os <<  "I am " << scr.getName() <<  ", " << scr.getTitle()
		<<  ", and I like ponies!" << std::endl;
	return os;
}
