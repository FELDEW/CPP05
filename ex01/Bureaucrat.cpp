#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const & name, int const grade): name(name), grade(grade)
{
	if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException("Grade too high!");
	else if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException("Grade too low!");
}

Bureaucrat::Bureaucrat(Bureaucrat const & origin): name(origin.name), grade(origin.grade)
{
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::GradeTooHighException::GradeTooHighException(std::string error): error(error)
{
}

Bureaucrat::GradeTooLowException::GradeTooLowException(std::string error): error(error)
{
}

Bureaucrat::FormSignException::FormSignException(std::string error): error(error)
{
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return this->error.c_str();
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return this->error.c_str();
}

const char* Bureaucrat::FormSignException::what() const throw()
{
	return this->error.c_str();
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &origin)
{
	if (this == &origin)
		return (*this);
	this->grade = origin.grade;
	return (*this);
}

std::string const & Bureaucrat::getName() const
{
	return (this->name);
}

int Bureaucrat::getGrade() const
{
	return (this->grade);
}

void Bureaucrat::incrementGrade(void)
{
	this->grade--;
	if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException("Grade too high!");
}

void Bureaucrat::decrementGrade(void)
{
	this->grade++;
	if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException("Grade too low!");
}

void Bureaucrat::signForm(Form & form)
{
	if (form.getIs_signed())
	{
		std::string error;
		error = this->name;
		error.append(" cannot sign ");
		error.append(form.getName());
		error.append(" because it's already signed!");
		throw Bureaucrat::FormSignException(error);
	}
	else
	{
		form.beSigned(*this);
		std::cout << this->name << " signs " << form.getName() << std::endl;
	}
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat)
{
	out << "name: " << bureaucrat.getName() << "| grade: " << bureaucrat.getGrade();
	return (out);
}