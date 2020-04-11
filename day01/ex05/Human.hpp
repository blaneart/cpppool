#ifndef HUMAN_HPP
#define HUMAN_HPP
#include "Brain.hpp"

class Human
{
	public:
		Human( void );
		~Human( void );
		std::string identify();
		Brain getBrain();
	private:
		Brain humanbrain;
};

#endif
