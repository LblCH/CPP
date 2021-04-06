
#ifndef CPP_BUREAUCRAT_H
#define CPP_BUREAUCRAT_H

#include <iostream>

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
};

	std::ostream    &operator<<(std::ostream & out, const Bureaucrat & bureaucrat);

#endif //CPP_BUREAUCRAT_H
