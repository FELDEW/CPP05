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
	/*
		class GradeTooHighException: public std::exception
		{
			virtual const char* what() const throw();
		};
		class GradeTooLowException: public std::exception
		{
			virtual const char* what() const throw();
		};
		*/
		class GradeTooHighException: public std::exception
		{
			private:
				std::string error;
			public:
				GradeTooHighException(std::string error);
				const char* what() const throw();
		};
		class GradeTooLowException: public std::exception
		{
			private:
				std::string error;
			public:
				GradeTooLowException(std::string error);
				const char* what() const throw();
		};
		class FormSignException: public std::exception
		{
			private:
				std::string error;
			public:
				FormSignException(std::string error);
				const char* what() const throw();
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
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat& origin);

#endif