#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <string>

int main()
{
	Bureaucrat kek("lol", 1);
	Form form("name", 44, 22);
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
	form.beSigned(kek);
	std::cout << form;
	std::cout << kek;
	try
	{
		form.beSigned(kek);
	}
	catch (std::exception & e) {
		std::cout << "nice try" << e.what() << std::endl;
	}
	std::cout << tree;
	return (0);
}
