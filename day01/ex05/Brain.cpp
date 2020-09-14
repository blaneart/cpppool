#include "Brain.hpp"

Brain::Brain(void)
{
	std::stringstream buffer;
	buffer << this;
	this->address = buffer.str();
}
Brain::~Brain(void)
{

}

std::string Brain::identify(void) const
{
	return (this->address);
}
