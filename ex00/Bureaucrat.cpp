#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const & name, int const grade): name(name), grade(grade)
{
	if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const & origin): name(origin.name), grade(origin.grade)
{
	if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat()
{
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade too High";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade too Low";
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
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrementGrade(void)
{
	this->grade++;
	if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat)
{
	out << "name: " << bureaucrat.getName() << "| grade: " << bureaucrat.getGrade();
	return (out);
}