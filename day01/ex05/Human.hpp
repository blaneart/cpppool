#ifndef HUMAN_HPP
#define HUMAN_HPP
#include "Brain.hpp"

class Human
{
	public:
		Human( void );
		~Human( void );
		std::string identify();
		const Brain &getBrain();
	private:
		const Brain humanbrain;
};

#endif
