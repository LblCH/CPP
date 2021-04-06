#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, unsigned int grade):
_name(name)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade = grade;
}

Bureaucrat::~Bureaucrat()
{}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) { *this = copy; }

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_grade = rhs._grade;
	}
	return *this;
}

const std::string & Bureaucrat::getName() const { return this->_name; }

int 	Bureaucrat::getGrade() const { return this->_grade; }

void 	Bureaucrat::incrementGrade()
{
	if (this->getGrade() == 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade--;
}

void 	Bureaucrat::decrementGrade()
{
	if (this->getGrade() == 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade++;
}

void 	Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->_name << " signs " << form.getName() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << this->_name << " cant sign " << form.getName() << " because ";
		std::cout << e.what() << std::endl;
	}
}

Bureaucrat::GradeTooHighException::GradeTooHighException() throw()
{}

Bureaucrat::GradeTooHighException::GradeTooHighException(const GradeTooHighException &src) throw()
{
	*this = src;
	return ;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw()
{}

Bureaucrat::GradeTooHighException &Bureaucrat::GradeTooHighException::operator= (const GradeTooHighException &rhs) throw()
{
	static_cast <void> (rhs);
	return (*this);
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{ return ("Grade can't be higher than 1."); }

Bureaucrat::GradeTooLowException::GradeTooLowException() throw()
{}

Bureaucrat::GradeTooLowException::GradeTooLowException(const GradeTooLowException &src) throw()
{ *this = src; }

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw()
{}

Bureaucrat::GradeTooLowException &Bureaucrat::GradeTooLowException::operator= (const GradeTooLowException &rhs) throw()
{
	static_cast <void> (rhs);
	return *this;
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{ return ("Grade can't be lower than 150."); }

Bureaucrat::NotSignedException::NotSignedException() throw()
{}

Bureaucrat::NotSignedException::NotSignedException(const NotSignedException &src) throw()
{ *this = src; }

Bureaucrat::NotSignedException::~NotSignedException() throw()
{}

Bureaucrat::NotSignedException &Bureaucrat::NotSignedException::operator= (const NotSignedException &rhs) throw()
{
	static_cast <void> (rhs);
	return *this;
}

const char *Bureaucrat::NotSignedException::what() const throw()
{ return ("This form is not signed, cant execute."); }

std::ostream    &operator<<(std::ostream & out, const Bureaucrat & bureaucrat)
{
	out << bureaucrat.getName() + ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
	return (out);
}