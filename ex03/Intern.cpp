#include "Intern.hpp"
Intern::Intern()
{
}

Intern::~Intern()
{
}

Intern::Intern(Intern const & origin)
{
	*this = origin;
}

Intern & Intern::operator=(Intern const &)
{
	return (*this);
}

Form *Intern::makeForm(std::string const & form, std::string const & target) const
{
	Form *new_form;
	int i = 0;
	Form *(Intern::*forms[4])( std::string const & ) const = {&Intern::makePresidentialPardonForm,\
	 &Intern::makeRobotomyRequestForm, &Intern::makeShrubberyCreationForm, &Intern::makeErrorForm};
	std::string request[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	while (request[i].compare(form) && i < 3)
		i++;
	new_form = (this->*forms[i])(target);
	std::cout << "Intern creates " << new_form->getName() << std::endl;
	return (new_form);
}

Form *Intern::makePresidentialPardonForm(std::string const & target) const
{
	Form *new_form = new PresidentialPardonForm(target);
	return (new_form);
}

Form *Intern::makeRobotomyRequestForm(std::string const & target) const
{
	Form *new_form = new RobotomyRequestForm(target);
	return (new_form);
}

Form *Intern::makeShrubberyCreationForm(std::string const & target) const
{
	Form *new_form = new ShrubberyCreationForm(target);
	return (new_form);
}

const char* Intern::InternException::what() const throw()
{
	return "Unknown form!";
}

Form *Intern::makeErrorForm(std::string const &) const
{
	Form *new_form = NULL;
	throw Intern::InternException();
	return (new_form);
}

