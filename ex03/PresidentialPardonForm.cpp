#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm(std::string const & target): target(target), Form("PresidentialPardonForm", 25, 5)
{

}
PresidentialPardonForm::~PresidentialPardonForm()
{

}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& origin): target(origin.target), Form("PresidentialPardonForm", 25, 5)
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