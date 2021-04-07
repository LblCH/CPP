
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) :
		Form("RobotomyRequestForm", 145, 137, target)
{}

RobotomyRequestForm::~RobotomyRequestForm()
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) :
Form(copy)
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	if (this != &rhs)
		Form::operator=(rhs);
	return (*this);
}

void	RobotomyRequestForm::beExecuted() const
{
	std::cout << "Vvvvvggggg... Vvvvvggg... Vvvvggggggggggg..." << std::endl;
	if(rand() % 2)
		std::cout << this->getTarget() << " successfully robotomized!" << std::endl;
	else
		std::cout << "The robotomization failed..." << std::endl;
}