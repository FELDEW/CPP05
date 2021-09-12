#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <fstream>
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private:
		std::string const target;
	public:
		PresidentialPardonForm(std::string const & target);
		~PresidentialPardonForm();
		PresidentialPardonForm(PresidentialPardonForm const& origin);
		PresidentialPardonForm& operator=(PresidentialPardonForm const& origin);
		void execute(Bureaucrat const & executor) const;
};

#endif