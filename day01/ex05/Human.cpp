#include "Human.hpp"

Human::Human()
{
}

Human::~Human()
{
}

std::string Human::identify(void)
{
	return (this->humanbrain.identify());
}

const Brain &Human::getBrain()
{
	return (this->humanbrain);
}
