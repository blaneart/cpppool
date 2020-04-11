#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern& other)
{
}

Intern& Intern::operator=(const Intern& other)
{
	return *this;
}

Intern::~Intern()
{}

Form* Intern::createShrubberyForm(std::string const & target)
{
	return new ShrubberyCreationForm(target);
}

Form* Intern::createRobotomyForm(std::string const & target)
{
	return new RobotomyRequestForm(target);
}

Form* Intern::createPresidentialForm(std::string const & target)
{
	return new PresidentialPardonForm(target);
}

const char *Intern::WrongFormName::what() const throw()
{
	return "InternExceptionL There is no form with this name.";
}

Form *Intern::makeForm(std::string const &formName, std::string const & target)
{
	std::string names[9] = {"shrubbery creation", "shrubberycreation", "shrubbery creation form",
			"robotomy request", "robotomyrequest", "robotomy request form", "presedetial pardon", "presidentialpardon", "presidential pardon form"};
	typedef Form *(Intern::*Forms)(std::string const & target);
	Forms creating[3] = {&Intern::createShrubberyForm, &Intern::createRobotomyForm, &Intern::createPresidentialForm};
	std::string copy(formName);
	for (int i = 0; i < copy.size(); i++)
		copy[i] = tolower(copy[i]);
	for (int i = 0; i < 9; i++)
	{
		if (copy == names[i])
		{
			std::cout << "Intern creates " << formName << std::endl;
			return (this->*(creating[i / 3]))(target);
		}
	}
	throw Intern::WrongFormName();
	return NULL;
}
