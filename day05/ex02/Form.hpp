#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
class Form;
#include "Bureaucrat.hpp"

class Form
{
	private:
		Form();
		std::string const name;
		bool sign;
		int const gr_sign;
		int const gr_exec;
	public:
		Form(std::string const & name, int const gr_sign, int const gr_exec);
		Form(const Form&);
		Form& operator=(const Form&);
		~Form();
		std::string const getName() const;
		bool isSigned() const;
		int const getGradeSign() const;
		int const getGradeExecute() const;
		void beSigned(Bureaucrat const &);
		class GradeTooLowException: public std::exception {
			virtual const char* what() const throw();
		};
		class GradeTooHighException: public std::exception {
			virtual const char* what() const throw();
		};
		class GradeTooLowToSignException: public std::exception {
			virtual const char* what() const throw();
		};
		class GradeTooLowToExecuteException: public std::exception {
			virtual const char* what() const throw();
		};
		class IsAlreadySignedException: public std::exception {
			virtual const char* what() const throw();
		};
		class IsNotSignedException: public std::exception {
			virtual const char* what() const throw();
		};
		virtual void execute(Bureaucrat const & executor) const;
};

std::ostream &operator<<(std::ostream &out, const Form &in);

#endif
