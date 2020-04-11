#include "Form.hpp"

Form::Form(std::string const & name, int const gr_sign, int const gr_exec) :
	name(name), gr_sign(gr_sign), gr_exec(gr_exec)
{
	this->sign = false;
	if (this->gr_sign > 150 || this->gr_exec > 150)
		throw Form::GradeTooLowException();
	else if (this->gr_sign < 1 || this->gr_exec < 1)
		throw Form::GradeTooHighException();
}

Form::Form(const Form& other) :
	name(other.name), gr_sign(other.gr_sign), gr_exec(other.gr_exec)
{
	this->sign = other.sign;
}

Form& Form::operator=(const Form& other)
{
	this->sign = other.sign;
	return (*this);
}

Form::~Form()
{}

std::string const Form::getName() const
{
	return this->name;
}

bool Form::isSigned() const
{
	return this->sign;
}

int const Form::getGradeSign() const
{
	return this->gr_sign;
}

int const Form::getGradeExecute() const
{
	return this->gr_exec;
}

void Form::beSigned(Bureaucrat const &bur)
{
	if (bur.getGrade() <= this->gr_sign && !this->sign)
	{
		std::cout << bur.getName() << " signs " << this->name << std::endl;
		this->sign = true;
	}
	else
	{
		if (this->sign == true)
			throw Form::IsAlreadySignedException();
		else
			throw Form::GradeTooLowToSignException();
	}
}

const char* Form::IsAlreadySignedException::what() const throw()
{
	return "FormException: The Form is already sign";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "FormException: The Form is already sign";
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "FormException: The Form is already sign";
}

const char* Form::GradeTooLowToSignException::what() const throw()
{
	return "FormException: The Form is already sign";
}

std::ostream &operator<<(std::ostream &out, const Form &in)
{
	out << "You need to have " << in.getGradeSign() << " grade to sign and "
		<< in.getGradeExecute() << " grade to execute " << in.getName() << " form. This form is currently " << ((in.isSigned()) ? "is signed." : "is unsigned.") << std::endl;
	return out;
}
