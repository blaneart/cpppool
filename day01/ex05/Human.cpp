#include "Human.hpp"

Human::Human()
{
}

Human::~Human()
{
	return ;
}

std::string Human::identify(void)
{
	return (this->humanbrain.identify());
}

Brain Human::getBrain()
{
	return (this->humanbrain);
}
