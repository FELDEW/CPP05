#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"


int main ()
{
	Form *form = NULL;
	Intern intern;
	try
	{
		form = intern.makeForm("robotomy request", "Bender");
		std::cout << *form << std::endl;
		Bureaucrat Bob("Bob", 20);
		std::cout << Bob << std::endl;
		Bob.signForm(*form);
		Bob.executeForm(*form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	if (form)
		delete form;
	form = NULL;
	std::cout << "-----------------" << std::endl;
	
	try
	{
		form = intern.makeForm("presidential pardon", "Bender");
		std::cout << *form << std::endl;
		Bureaucrat Bob("Bob", 20);
		std::cout << Bob << std::endl;
		Bob.signForm(*form);
		Bob.executeForm(*form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	if (form)
		delete form;
	form = NULL;
	std::cout << "-----------------" << std::endl;

	try
	{
		form = intern.makeForm("shrubbery creation", "Bender");
		std::cout << *form << std::endl;
		Bureaucrat Bob("Bob", 20);
		std::cout << Bob << std::endl;
		Bob.signForm(*form);
		Bob.executeForm(*form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	if (form)
		delete form;
	form = NULL;
	std::cout << "-----------------" << std::endl;

	try
	{
		form = intern.makeForm("strange form", "Bender");
		std::cout << *form << std::endl;
		Bureaucrat Bob("Bob", 20);
		std::cout << Bob << std::endl;
		Bob.signForm(*form);
		Bob.executeForm(*form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << form << std::endl;
	if (form)
		delete form;
	std::cout << "-----------------" << std::endl;
	
	return (0);
}