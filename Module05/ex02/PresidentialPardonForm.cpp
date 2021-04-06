
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) :
		Form("PresidentialPardonForm", 25, 5, target)
{}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) :
Form(copy)
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
	if (this != &rhs)
		Form::operator=rhs;
	return (*this);
}

void PresidentialPardonForm::beExecuted() const
{
	std::cout << this->getTarget() << " was pardonned by Zafod Beeblebrox." << std::endl;
}
