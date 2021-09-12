#include "Form.hpp"

Form::Form(std::string const & name, int const grade_to_sign, int const grade_to_execute): name(name), grade_to_sign(grade_to_sign), grade_to_execute(grade_to_execute)
{
	this->is_signed = false;
	if (this->grade_to_sign < 1 || this->grade_to_execute < 1)
		throw Form::GradeTooHighException("Form grade too high!");
	else if (this->grade_to_sign > 150 || this->grade_to_execute > 150)
		throw Form::GradeTooLowException("Form grade too low!");
}

Form::Form(Form const & origin): name(origin.name), grade_to_sign(origin.grade_to_sign), grade_to_execute(origin.grade_to_execute)
{
	*this = origin;
}

Form::~Form()
{
}

Form::GradeTooHighException::GradeTooHighException(std::string error): error(error)
{
}

Form::GradeTooLowException::GradeTooLowException(std::string error): error(error)
{
}

const char* Form::GradeTooHighException::what() const throw()
{
	return this->error.c_str();
}

const char* Form::GradeTooLowException::what() const throw()
{
	return this->error.c_str();
}

Form &Form::operator=(Form const &origin)
{
	if (this == &origin)
		return (*this);
	this->is_signed = origin.is_signed;
	return (*this);
}

std::string const & Form::getName() const
{
	return (this->name);
}

int const Form::getGrade_to_sign() const
{
	return (this->grade_to_sign);
}

int  const Form::getGrade_to_execute() const
{
	return (this->grade_to_execute);
}

bool const Form::getIs_signed() const
{
	return (this->is_signed);
}

void Form::beSigned(Bureaucrat const & bureaucrat)
{
	if (this->grade_to_sign < bureaucrat.getGrade())
	{
		std::string error;
		error = bureaucrat.getName();
		error.append(" cannot sign ");
		error.append(this->name);
		error.append(" because bureaucrat's grade too low!");
		throw Form::GradeTooLowException(error);
	}
	this->is_signed =  true;	
}

void Form::tryExecute(Bureaucrat const & bureaucrat) const
{
	if (this->grade_to_execute < bureaucrat.getGrade())
	{
		std::string error;
		error = bureaucrat.getName();
		error.append(" cannot execute ");
		error.append(this->name);
		error.append(" because bureaucrat's grade too low!");
		throw Form::GradeTooLowException(error);
	}	
}

std::ostream &operator<<(std::ostream &out, Form const &Form)
{
	out << "Form: " << Form.getName() << "is signed: " << (Form.getIs_signed() ? "yes" : "no");
	return (out);
}