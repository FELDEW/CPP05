#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm(std::string const & target): target(target), Form("PresidentialPardonForm", 72, 45)
{

}
PresidentialPardonForm::~PresidentialPardonForm()
{

}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& origin): target(origin.target), Form("PresidentialPardonForm", 145, 137)
{
	*this = origin;
}
PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const& origin)
{
	return (*this);
}
void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	this->tryExecute(executor);
		std::cout << this->target << "  has been pardoned by Zafod Beeblebrox!" << std::endl;
}