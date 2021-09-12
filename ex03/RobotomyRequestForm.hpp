#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <fstream>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private:
		std::string const target;
	public:
		RobotomyRequestForm(std::string const & target);
		~RobotomyRequestForm();
		RobotomyRequestForm(RobotomyRequestForm const& origin);
		RobotomyRequestForm& operator=(RobotomyRequestForm const& origin);
		void execute(Bureaucrat const & executor) const;
};

#endif