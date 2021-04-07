# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

static void testForm(Bureaucrat* bur, Form* form)
{
	std::cout << std::endl << "Sign & Execute \033[31m" << form->getName() << "\033[0m : " << std::endl;
	bur->signForm(*form);
	bur->executeForm(*form);
}

int main()
{
	Bureaucrat *john = new Bureaucrat("John", 1);
	Bureaucrat *jim = new Bureaucrat("Jim", 150);

//	try
//	{ Bureaucrat *al = new Bureaucrat("Al", 200); }
//	catch (std::exception &e)
//	{ std::cerr << "Exception in construction: " << e.what() << std::endl; }

	std::cout << *john;
	std::cout << *jim;

	try
	{ john->incrementGrade(); }
	catch (std::exception &e)
	{ std::cerr << "Exception : " << e.what() << std::endl; }

	try
	{ jim->decrementGrade(); }
	catch (std::exception &e)
	{ std::cerr << "Exception : " << e.what() << std::endl; }

	try
	{
		jim->incrementGrade();
		john->decrementGrade();
	}
	catch (std::exception &e)
	{
		std::cerr << "There musnt be Exceptions" << std::endl;
	}

	std::cout << *john;
	std::cout << *jim;


	Form *form21C = new Form("21C", 1, 120);
	Form *form21B = new Form("21B", 150, 120);
	try
	{
//		Form *form21A = new Form("21A", 200, 120);
		form21C->beSigned(*john);
	}
	catch (std::exception &e)
	{ std::cerr << "Exception : " << e.what() << std::endl; }

	john->incrementGrade();
	std::cout << *john;

	try
	{ form21C->beSigned(*john); }
	catch (std::exception &e)
	{ std::cerr << "Exception : " << e.what() << std::endl; }

	std::cout << "Form " << form21C->getName() << " sign status : " << form21C->getSign() << std::endl;

	try
	{ jim->signForm(*form21B); }
	catch (std::exception &e)
	{ std::cerr << "Exception : " << e.what() << std::endl; }

	delete form21C;
	delete form21B;
	delete john;
	delete jim;

	ShrubberyCreationForm* shrub = new ShrubberyCreationForm("Patrick");
	RobotomyRequestForm* robot = new RobotomyRequestForm("Bob");
	PresidentialPardonForm* pardon = new PresidentialPardonForm("Pef");

	Bureaucrat* bob = new Bureaucrat("Bob", 120);
	Bureaucrat* james = new Bureaucrat("James", 33);
	Bureaucrat* meg = new Bureaucrat("Meg", 1);

	testForm(bob, shrub);
	testForm(james, robot);
	testForm(meg, pardon);
	testForm(bob, pardon);

	delete shrub;
	delete robot;
	delete pardon;

	delete bob;
	delete james;
	delete meg;
	std::cout << std::endl;

	Form *f1;
	Form *f2;
	Form *f3;
	Form *f4;
	Intern i1;
	Bureaucrat b1 = Bureaucrat("Bob", 42);

	f1 = i1.makeForm("robotomy request", "Marvin");
	f2 = i1.makeForm("presidential pardon", "Marvin");
	f3 = i1.makeForm("shrubbery creation", "Marvin");
	f4 = i1.makeForm("TEST", "Marvin");
	std::cout << std::endl;
	std::cout << *f1 << std::endl;
	std::cout << *f2 << std::endl;
	std::cout << *f3 << std::endl;

	b1.signForm(*f1);
	b1.executeForm(*f1);
}

