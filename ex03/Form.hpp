#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	protected:
		std::string const name;
		bool is_signed;
		int const grade_to_sign;
		int const grade_to_execute;
	public:
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
		Form(std::string const & name, int const grade_to_sign, int const grade_to_execute);
		virtual ~Form();
		Form(Form const& origin);
		Form& operator=(Form const& origin);
		std::string const & getName() const;
		int const getGrade_to_sign() const;
		int const getGrade_to_execute() const;
		bool  const getIs_signed() const;
		void beSigned(Bureaucrat const & bureaucrat);
		void tryExecute(Bureaucrat const & bureaucrat) const;
		virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream& operator<<(std::ostream& out, const Form& origin);

#endif