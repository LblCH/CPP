
#ifndef CPP_ROBOTOMYREQUESTFORM_HPP
#define CPP_ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	RobotomyRequestForm();
	void	beExecuted() const;

public:
	RobotomyRequestForm(std::string const &target);
	virtual ~RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm &);
	RobotomyRequestForm &operator=(const RobotomyRequestForm &rhs);
};


#endif //CPP_ROBOTOMYREQUESTFORM_HPP
