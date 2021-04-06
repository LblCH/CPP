
#include "Form.hpp"

Form::Form(std::string name, int gradeToSign, int gradeToExecute) :
_name(name),
_sign(false)
{
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw Form::GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw Form::GradeTooLowException();
	else
	{
		_gradeToExecute = gradeToExecute;
		_gradeToSign = gradeToSign;
	}
}

Form::~Form()
{
}

Form::Form(const Form &copy)
{
	*this = copy;
}

Form &Form::operator=(const Form &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs.getName();
		this->_sign = rhs.getSign();
		this->_gradeToSign = rhs.getGradeToSign();
		this->_gradeToExecute = rhs.getGradeToExecute();
	}
	return *this;
}

std::string const Form::getName() const { return this->_name; }

bool Form::getSign() const { return this->_sign; }

int Form::getGradeToSign() const { return this->_gradeToSign; }

int Form::getGradeToExecute() const { return this->_gradeToExecute; }

void Form::beSigned(Bureaucrat &bureaucrat)
{
	if (this->_gradeToSign < bureaucrat.getGrade())
		throw Form::GradeTooLowException();
	this->_sign = true;
}

Form::GradeTooHighException::GradeTooHighException() throw()
{}

Form::GradeTooHighException::GradeTooHighException(const GradeTooHighException &src) throw()
{
	*this = src;
	return ;
}

Form::GradeTooHighException::~GradeTooHighException() throw()
{}

Form::GradeTooHighException &Form::GradeTooHighException::operator= (const GradeTooHighException &rhs) throw()
{
	static_cast <void> (rhs);
	return (*this);
}

const char *Form::GradeTooHighException::what() const throw()
{ return ("Form: Grade too high."); }

Form::GradeTooLowException::GradeTooLowException() throw()
{}

Form::GradeTooLowException::GradeTooLowException(const GradeTooLowException &src) throw()
{ *this = src; }

Form::GradeTooLowException::~GradeTooLowException() throw()
{}

Form::GradeTooLowException &Form::GradeTooLowException::operator= (const GradeTooLowException &rhs) throw()
{
	static_cast <void> (rhs);
	return *this;
}

const char *Form::GradeTooLowException::what() const throw()
{ return ("Form: Grade too low."); }