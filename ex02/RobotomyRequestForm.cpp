#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm(std::string const & target): target(target), Form("RobotomyRequestForm", 72, 45)
{

}
RobotomyRequestForm::~RobotomyRequestForm()
{

}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& origin): target(origin.target), Form("RobotomyRequestForm", 145, 137)
{
	*this = origin;
}
RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const& origin)
{
	return (*this);
}
void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	this->tryExecute(executor);
		std::cout << "DRRR DRRRR DRRRR" << std::endl;
		std::cout << this->target << "  has been robotomized successfully 50\% of the time!" << std::endl;
}
