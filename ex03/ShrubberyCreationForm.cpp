#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target): Form("ShrubberyCreationForm", 145, 137), target(target)
{
}
ShrubberyCreationForm::~ShrubberyCreationForm()
{
}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& origin): Form("ShrubberyCreationForm", 145, 137), target(origin.target)
{
	*this = origin;
}
ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const& origin)
{
	if (this == &origin)
		return (*this);
	this->is_signed = origin.is_signed;
	return (*this);
}
void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	this->tryExecute(executor);
	std::string file_name = this->target;
	file_name.append("_shrubbery");
	std::ofstream in(file_name.c_str());
		in << "      /\\\n" \
		   << "     /\\*\\\n" \
		   << "    /\\O\\*\\\n" \
		   << "   /*/\\/\\/\\\n" \
		   << "  /\\O\\/\\*\\/\\\n" \
		   << " /\\*\\/\\*\\/\\/\\\n" \
		   << "/\\O\\/\\/*/\\/O/\\\n" \
		   << "      ||\n" \
		   << "      ||\n" \
		   << "      ||\n";
}
