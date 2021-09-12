#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


int main ()
{
	try
	{
		PresidentialPardonForm form1 = PresidentialPardonForm("Grigor");
		std::cout << form1 << std::endl;
		Bureaucrat Bob("Bob", 20);
		std::cout << Bob << std::endl;
		Bob.signForm(form1);
		Bob.executeForm(form1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "-----------------" << std::endl;
	
	try
	{
		RobotomyRequestForm form1 = RobotomyRequestForm("Grigor");
		std::cout << form1 << std::endl;
		Bureaucrat Bob("Bob", 10);
		std::cout << Bob << std::endl;
		Bob.signForm(form1);
		Bob.executeForm(form1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "-----------------" << std::endl;

	try
	{
		ShrubberyCreationForm form1 = ShrubberyCreationForm("Grigor");
		std::cout << form1 << std::endl;
		Bureaucrat Bob("Bob", 10);
		std::cout << Bob << std::endl;
		Bob.signForm(form1);
		Bob.executeForm(form1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		std::cout << "Here is an error!" << std::endl;
	}
	std::cout << "-----------------" << std::endl;
	
	return (0);
}