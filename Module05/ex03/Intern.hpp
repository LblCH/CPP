
#ifndef CPP_INTERN_HPP
#define CPP_INTERN_HPP

# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
public:
	Intern();
	virtual ~Intern();
	Intern(const Intern &);
	Intern &operator=(const Intern &rhs);

	typedef Form* (Intern::*InternFPtr)(std::string);
	Form* makeForm(std::string const &form, std::string const &target);

private:
	InternFPtr                _functions[3];
	std::string     static    _names[3];
	Form* _searchForm(std::string form, std::string target);
	Form* _newPPForm(std::string target);
	Form* _newRRForm(std::string target);
	Form* _newSCForm(std::string target);
};

#endif //CPP_INTERN_HPP
