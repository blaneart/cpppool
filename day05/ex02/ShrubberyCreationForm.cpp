#include "ShrubberyCreationForm.hpp"


std::string const tree("\n\
        ,@@@@@@@,\n\
      ,@@@@@@/@@@@,  .oo8888o.\n\
     ,@@@@@/@@@@@@@,8888\\88/8o\n\
     ,@@@\\@@@/@@@@@,88\\88888/88'\n\
      ,@@@@@\\@@/@@@88888\\88888'\n\
       ,@@\\ V /@@' `88\\8 `/88'\n\
           |.|        \\ '|8'\n\
           | |         | |\n\
           | |         | |\n\
 _________/  ,\\_//____/.  \\_//__/_\n");

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target) :
	Form("Shrubbery Creation", 145, 137)
{
	this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) :
	Form("Shrubbery Creation", 145, 137)
{
	this->target = other.target;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
	this->target = other.target;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
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
	std::ofstream file(this->target + "_shrubbery");
	file << tree;
	file.close();
}
