
#ifndef CPP_SHRUBBERYCREATIONFORM_HPP
#define CPP_SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
private:
	ShrubberyCreationForm();

public:
	ShrubberyCreationForm(std::string const &target);
	virtual ~ShrubberyCreationForm();
	ShrubberyCreationForm(const ShrubberyCreationForm &);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &rhs);
	void 	beExecuted(const Bureaucrat &executor) const;
};


#endif //CPP_SHRUBBERYCREATIONFORM_HPP
