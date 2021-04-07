
#include "Intern.hpp"

Intern::Intern()
{
	_functions[0] = &Intern::_newPPForm;
	_functions[1] = &Intern::_newRRForm;
	_functions[2] = &Intern::_newSCForm;
	return ;
}

std::string	Intern::_names[3] = {
		"presidential pardon",
		"robotomy request",
		"shrubbery creation"
};

Intern::~Intern()
{}

Intern::Intern(const Intern &copy)
{ *this = copy; }

Intern &Intern::operator=(const Intern &rhs)
{
	static_cast<void>(rhs);
	return *this;
}

Form* Intern::makeForm(std::string const &form, std::string const &target)
{
	try
	{
		return _searchForm(form, target);
	}
	catch (std::exception &e)
	{
		std::cout << form << " : form not found." << std::endl;
		return NULL;
	}
}

Form* Intern::_searchForm(std::string form, std::string target)
{
	for (int i = 0; i < 3; i += 1)
	{
		if (form == this->_names[i])
			return (this->*_functions[i])(target);
	}
	std::cout << "Form not found" << std::endl;
	return (NULL);
}


Form* Intern::_newPPForm(std::string target)
{ return (new PresidentialPardonForm(target)); }

Form* Intern::_newRRForm(std::string target)
{ return (new RobotomyRequestForm(target)); }

Form* Intern::_newSCForm(std::string target)
{ return (new ShrubberyCreationForm(target)); }