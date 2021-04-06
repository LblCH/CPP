
#ifndef CPP_ROBOTOMYREQUESTFORM_HPP
#define CPP_ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	RobotomyRequestForm();

public:
	RobotomyRequestForm(std::string const &target);
	virtual ~RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm &);
	RobotomyRequestForm &operator=(const RobotomyRequestForm &rhs);
	void	beExecuted(const Bureaucrat &executor) const;
};


#endif //CPP_ROBOTOMYREQUESTFORM_HPP
