#ifndef INTERN_HPP
#define INTERN_HPP

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <exception>

class Intern
{
	private:
		Form *makePresidentialPardonForm(std::string const &) const;
		Form *makeRobotomyRequestForm(std::string const &) const;
		Form *makeShrubberyCreationForm(std::string const &) const;
		Form *makeErrorForm(std::string const &) const;
	public:
		class InternException : public std::exception
		{
			virtual const char* what() const throw();
		};
		Form *makeForm(std::string const & form, std::string const & target) const;
		Intern();
		~Intern();
		Intern(Intern const & origin);
		Intern & operator=(Intern const & origin);

};

#endif