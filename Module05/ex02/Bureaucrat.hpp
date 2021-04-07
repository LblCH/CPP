
#ifndef CPP_BUREAUCRAT_H
#define CPP_BUREAUCRAT_H

#include <iostream>
#include "Form.hpp"

class Form;
class Bureaucrat;

class Bureaucrat
{
private:
	Bureaucrat();
	std::string _name;
	int 		_grade;

public:
	Bureaucrat(std::string name, unsigned int grade);
	virtual ~Bureaucrat();
	Bureaucrat(const Bureaucrat &);
	Bureaucrat &operator=(const Bureaucrat &rhs);

	const std::string & getName() const;
	int 				getGrade() const;

	void 				incrementGrade();
	void 				decrementGrade();
	void 				signForm(Form &form);
	void				executeForm(Form const & form);

	class GradeTooHighException : public std::exception
	{
	public:
		GradeTooHighException () throw();
		GradeTooHighException (const GradeTooHighException&) throw();
		GradeTooHighException& operator= (const GradeTooHighException&) throw();
		virtual ~GradeTooHighException() throw();
		virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
	public:
		GradeTooLowException() throw();
		GradeTooLowException(const GradeTooLowException &) throw();
		GradeTooLowException &operator=(const GradeTooLowException &) throw();
		virtual ~GradeTooLowException() throw();
		virtual const char *what() const throw();
	};

	class NotSignedException : public std::exception
	{
	public:
		NotSignedException() throw();
		NotSignedException(const NotSignedException &) throw();
		NotSignedException &operator=(const NotSignedException &) throw();
		virtual ~NotSignedException() throw();
		virtual const char *what() const throw();
	};
};

	std::ostream    &operator<<(std::ostream & out, const Bureaucrat & bureaucrat);

#endif //CPP_BUREAUCRAT_H
