#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const & target) :
	Form("Robotomy Request", 72, 45)
{
	this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) :
	Form("Robotomy Request", 72, 45)
{
	this->target = other.target;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
	this->target = other.target;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
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
	std::cout << " *Dzzzz Dzz Dzzzzz* " << std::endl;
	int i = rand() % 1;
	if (i)
		std::cout << target << " is successfully robotomized." << std::endl;
	else
		std::cout << "FAILURE" << std::endl;
}
