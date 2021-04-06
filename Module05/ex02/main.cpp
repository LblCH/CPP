#include "Bureaucrat.hpp"

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
}

