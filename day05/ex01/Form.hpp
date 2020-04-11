#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
	private:
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
		class IsAlreadySignedException: public std::exception {
			virtual const char* what() const throw();
		};
};

std::ostream &operator<<(std::ostream &out, const Form &in);

#endif
