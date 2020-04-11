#include "Victim.hpp"

Victim::Victim(std::string name)
{
	this->name = name;
	std::cout << "Some random victim called "
			<< name << " just appeared!" << std::endl;
}

Victim::~Victim()
{
	std::cout << "Victim " << this->name << " just died for no apparent reason!"
			<< std::endl;
}

Victim::Victim(const Victim& other)
{
	this->name = other.name;
}

Victim& Victim::operator=(const Victim& other)
{
	this->name = other.name;
	return *this;
}

std::string Victim::getName(void) const
{
	return this->name;
}

void Victim::getPolymorphed() const
{
	std::cout << this->name << " has been turned into a cute little sheep!"
 				<< std::endl;
}
std::ostream& operator<<(std::ostream& os, const Victim& vic)
{
	os << "I'm " << vic.getName() << " and I like otters!" << std::endl;
	return os;
}
