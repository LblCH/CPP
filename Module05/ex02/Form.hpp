
#ifndef CPP_FORM_HPP
#define CPP_FORM_HPP

#include "Bureaucrat.hpp"

class Form;
class Bureaucrat;

class Form
{
private:
	Form();
	std::string _name;
	bool		_sign;
	int			_gradeToSign;
	int 		_gradeToExecute;
	std::string _target;
	virtual void        beExecuted() const;

public:
	Form(std::string name, int gradeToSign, int gradeToExecute);
	Form(std::string name, int gradeToSign, int gradeToExecute, std::string const target);
	virtual ~Form();
	Form(const Form &);
	Form &operator=(const Form &);

	std::string const getName() const;
	bool getSign() const;
	std::string const getTarget() const;
	int getGradeToSign() const;
	int getGradeToExecute() const;
	void beSigned(Bureaucrat &bureaucrat);

	class GradeTooHighException : public std::exception
	{
	public:
		GradeTooHighException () throw();
		GradeTooHighException (const GradeTooHighException&) throw();
		GradeTooHighException &operator= (const GradeTooHighException&) throw();
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
};

std::ostream    &operator<<(std::ostream & out, const Form & form);

#endif //CPP_FORM_HPP
