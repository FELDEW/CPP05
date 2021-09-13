#include "Bureaucrat.hpp"

int main ()
{
	Bureaucrat middle("middle", 75);
	std::cout << middle << std::endl;
	middle.decrementGrade();
	std::cout << middle << std::endl;
	middle.incrementGrade();
	std::cout << middle << std::endl;
	std::cout << "-----------------" << std::endl;

	try
	{
		Bureaucrat high("high", 1);
		std::cout << high << std::endl;
		high.incrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "-----------------" << std::endl;

	try
	{
		Bureaucrat low("low", 150);
		std::cout << low << std::endl;
		low.decrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "-----------------" << std::endl;

	try
	{
		Bureaucrat toohigh("toohigh", 0);
		std::cout << toohigh << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "-----------------" << std::endl;

	try
	{
		Bureaucrat toolow("toolow", 151);
		std::cout << toolow << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "-----------------" << std::endl;

	
	return (0);
}