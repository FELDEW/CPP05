#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm(std::string const & target): Form("RobotomyRequestForm", 72, 45), target(target)
{

}
RobotomyRequestForm::~RobotomyRequestForm()
{

}
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& origin): Form("RobotomyRequestForm", 72, 45), target(origin.target)
{
	*this = origin;
}
RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const& origin)
{
	if (this == &origin)
		return (*this);
	this->is_signed = origin.is_signed;
	return (*this);
}
void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	this->tryExecute(executor);
		std::cout << "DRRR DRRRR DRRRR" << std::endl;
		std::cout << this->target << "  has been robotomized successfully 50\% of the time!" << std::endl;
}
