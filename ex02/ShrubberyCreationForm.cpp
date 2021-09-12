#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target): target(target), Form("ShrubberyCreationForm", 145, 137)
{

}
ShrubberyCreationForm::~ShrubberyCreationForm()
{

}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& origin): target(origin.target), Form("ShrubberyCreationForm", 145, 137)
{
	*this = origin;
}
ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const& origin)
{
	return (*this);
}
void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	this->tryExecute(executor);
	std::string file_name = this->target;
	std::ofstream in(file_name.append("_shrubbery"));
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
