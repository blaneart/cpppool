#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <string>
#include <sstream>
class Brain
{
	public:
		Brain();
		~Brain();
		std::string identify();
	private:
		std::string address;
};
#endif
