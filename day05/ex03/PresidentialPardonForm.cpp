#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const & target) :
	Form("Presidential Pardon", 25, 5)
{
	this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) :
	Form("Presidential Pardon", 25, 5)
{
	this->target = other.target;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
	this->target = other.target;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	try
	{
		Form::execute(executor);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
		throw e;
		return ;
	}
	std::cout << this->target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}
