#include "Brain.hpp"

Brain::Brain(void)
{
	srand (time(NULL));
	volume = rand() % 3000;
}

Brain::~Brain(void)
{
}

std::string Brain::identify(void) const
{
	std::stringstream buffer;
	buffer << this;
	return (buffer.str());
}
