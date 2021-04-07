
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

Form::Form(std::string name, int gradeToSign, int gradeToExecute, std::string const target) :
		_name(name),
		_sign(false),
		_target(target)
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
		this->_target = rhs.getTarget();
	}
	return *this;
}

std::string const Form::getName() const { return this->_name; }

bool Form::getSign() const { return this->_sign; }

std::string const Form::getTarget() const { return this->_target; }

int Form::getGradeToSign() const { return this->_gradeToSign; }

int Form::getGradeToExecute() const { return this->_gradeToExecute; }

void Form::beSigned(Bureaucrat &bureaucrat)
{
	if (this->_gradeToSign < bureaucrat.getGrade())
		throw Form::GradeTooLowException();
	this->_sign = true;
}

void        Form::beExecuted() const
{}

void Form::execute(Bureaucrat const & executor) const
{
	if (!this->_sign)
		throw std::string("the form is not signed.");
	else if (executor.getGrade() > this->_gradeToExecute)
		throw std::string("grade is to low.");
	this->beExecuted();
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

std::ostream	&operator<<(std::ostream & out, const Form & form)
{
	out << "Form : \033[31m" << form.getName() << "\033[0m :" << std::endl;

	out << "Grade to sign : " << form.getGradeToSign() << std::endl;
	out << "Grade to execute : " << form.getGradeToExecute() << std::endl;
	if (!form.getSign())
		out << "--not signed, ";
	else
		out << "--signed, " << std::endl;
	out << std::endl;
	return (out);
}
