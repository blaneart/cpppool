#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <string>
int main()
{
	Bureaucrat kek("lol", 2);
	Form *form = new ShrubberyCreationForm("name");
	Form *form2 = new RobotomyRequestForm("name2");
	Form *form3 = new PresidentialPardonForm("name3");
	// std::cout << kek;
	// try
	// {
	// 	kek.incrementGrade();
	// }
	// catch (std::exception & e) {
	// std::cout << "nice try" << std::endl;
	// }
	// try
	// {
	// 	kek.decrementGrade();
	// }
	// catch (std::exception & e) {
	// std::cout << "nice try" << std::endl;
	// }
	// std::cout << *form;
	// std::cout << kek;
	// form2->beSigned(kek);
	try
	{
		form3->beSigned(kek);
	}
	catch (std::exception & e) {
	std::cout << e.what() << std::endl;
	}
	// kek.executeForm(*form);
	// kek.executeForm(*form2);
	kek.executeForm(*form3);
	return (0);
}
