#ifndef INTERN_HPP
#define INTERN_HPP
#include <iostream>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	public:
		Intern();
		Intern(const Intern&);
		Intern& operator=(const Intern&);
		~Intern();
		Form* createShrubberyForm(std::string const &);
		Form* createRobotomyForm(std::string const &);
		Form* createPresidentialForm(std::string const &);
		Form* makeForm(std::string const& , std::string const &);
		class WrongFormName: public std::exception {
			virtual const char* what() const throw();
		};
};
#endif
