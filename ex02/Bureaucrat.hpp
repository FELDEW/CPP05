#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		std::string const name;
		int grade;
	public:
		class GradeTooHighException: public std::exception
		{
			private:
				std::string error;
			public:
				GradeTooHighException(std::string error);
				const char* what() const throw();
				~GradeTooHighException() throw();
		};
		class GradeTooLowException: public std::exception
		{
			private:
				std::string error;
			public:
				GradeTooLowException(std::string error);
				const char* what() const throw();
				~GradeTooLowException() throw();
		};
		class FormSignException: public std::exception
		{
			private:
				std::string error;
			public:
				FormSignException(std::string error);
				const char* what() const throw();
				~FormSignException() throw();
		};
		Bureaucrat(std::string const & name, int const grade);
		~Bureaucrat();
		Bureaucrat(Bureaucrat const& origin);
		Bureaucrat& operator=(Bureaucrat const& origin);
		std::string const & getName() const;
		int getGrade() const;
		void signForm(Form & form);
		void incrementGrade();
		void decrementGrade();
		void executeForm(Form const & form);
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& origin);

#endif