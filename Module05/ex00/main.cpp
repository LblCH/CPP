#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat *john = new Bureaucrat("John", 1);
	Bureaucrat *jim = new Bureaucrat("Jim", 150);
	try
	{ Bureaucrat *al = new Bureaucrat("Al", 200); }
	catch (std::exception &e)
	{ std::cerr << "Exception in construction: " << e.what() << std::endl; }
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
		std::cerr << "There musnt be Exception" << std::endl;
	}
	std::cout << *john;
	std::cout << *jim;
	delete john;
	delete jim;
}

