
#ifndef CPP_PRESIDENTIALPARDONFORM_HPP
#define CPP_PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	PresidentialPardonForm();
	void beExecuted() const;

public:
	PresidentialPardonForm(std::string const &target);
	virtual ~PresidentialPardonForm();
	PresidentialPardonForm(const PresidentialPardonForm &);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &rhs);
};


#endif //CPP_PRESIDENTIALPARDONFORM_HPP
