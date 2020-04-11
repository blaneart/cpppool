#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const &name, int grade):
	name(name), grade(grade)
{
	if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& other):
	name(other.name), grade(other.grade)
{
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
	this->grade = other.getGrade();
	return *this;
}

Bureaucrat::~Bureaucrat()
{

}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "BureaucratException: Grade too High";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "BureaucratException: Grade too Low";
}

std::string const Bureaucrat::getName() const
{
	return this->name;
}

int Bureaucrat::getGrade() const
{
	return this->grade;
}
void Bureaucrat::incrementGrade(void)
{
	if (this->grade < 2)
		throw Bureaucrat::GradeTooHighException();
	else
		this->grade--;
}

void Bureaucrat::decrementGrade(void)
{

	if (this->grade > 149)
		throw Bureaucrat::GradeTooLowException();
	else
		this->grade++;
}

void Bureaucrat::executeForm(Form const & form)
{
	try
	{
		form.execute(*this);
	}
	catch (std::exception & e)
	{
		return ;
	}
	std::cout << this->name << " executes " << form.getName() << std::endl;
}
std::ostream &operator<<(std::ostream &out, const Bureaucrat &in)
{
	out << in.getName() << ", bureaucrat grade " << in.getGrade() << std::endl;
	return out;
}
