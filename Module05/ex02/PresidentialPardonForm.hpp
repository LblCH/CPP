
#ifndef CPP_PRESIDENTIALPARDONFORM_HPP
#define CPP_PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	PresidentialPardonForm();

public:
	PresidentialPardonForm();
	virtual ~PresidentialPardonForm();
	PresidentialPardonForm(const PresidentialPardonForm &);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &rhs);
	void PresidentialPardonForm::beExecuted() const;
};


#endif //CPP_PRESIDENTIALPARDONFORM_HPP
