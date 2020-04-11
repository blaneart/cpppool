#include "Bureaucrat.hpp"
#include <string>
int main()
{
	Bureaucrat kek("lol", 1);
	std::cout << kek;
	try
	{
		kek.incrementGrade();
	}
	catch (std::exception & e) {
	std::cout << "nice try" << std::endl;
	}
	try
	{
		kek.decrementGrade();
	}
	catch (std::exception & e) {
	std::cout << "nice try" << std::endl;
	}
	std::cout << kek;
	return (0);
}
