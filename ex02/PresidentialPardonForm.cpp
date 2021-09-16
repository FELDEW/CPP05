#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm(std::string const & target): Form("PresidentialPardonForm", 25, 5), target(target)
{

}
PresidentialPardonForm::~PresidentialPardonForm()
{

}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& origin): Form("PresidentialPardonForm", 25, 5), target(origin.target)
{
	*this = origin;
}
PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const& origin)
{
	if (this == &origin)
		return (*this);
	this->is_signed = origin.is_signed;
	return (*this);
}
void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	this->tryExecute(executor);
		std::cout << this->target << "  has been pardoned by Zafod Beeblebrox!" << std::endl;
}