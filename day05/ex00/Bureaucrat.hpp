#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <exception>
class Bureaucrat
{
	private:

		std::string const name;
		int grade;
	public:
		Bureaucrat(std::string const &, int);
		Bureaucrat(const Bureaucrat&);
		Bureaucrat& operator=(const Bureaucrat&);
		~Bureaucrat();
		std::string const getName() const;
		int getGrade() const;
		class GradeTooHighException: public std::exception {
			virtual const char* what() const throw();
		};
		class GradeTooLowException: public std::exception {
			virtual const char* what() const throw();
		};
		void decrementGrade();
		void incrementGrade();
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &in);


#endif
