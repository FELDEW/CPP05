#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	private:
		std::string const target;
	public:
		ShrubberyCreationForm(std::string const & target);
		~ShrubberyCreationForm();
		ShrubberyCreationForm(ShrubberyCreationForm const& origin);
		ShrubberyCreationForm& operator=(ShrubberyCreationForm const& origin);
		void execute(Bureaucrat const & executor) const;
};

#endif