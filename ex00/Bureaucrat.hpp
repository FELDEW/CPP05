#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
	private:
		std::string const name;
		int grade;
	public:
		class GradeTooHighException: public std::exception
		{
			virtual const char* what() const throw();
		};
		class GradeTooLowException: public std::exception
		{
			virtual const char* what() const throw();
		};
		Bureaucrat(std::string const & name, int const grade);
		~Bureaucrat();
		Bureaucrat(Bureaucrat const& origin);
		Bureaucrat& operator=(Bureaucrat const& origin);
		std::string const & getName() const;
		int getGrade() const;
		void incrementGrade();
		void decrementGrade();
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& origin);

#endif