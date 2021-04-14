#include "ScalarConversion.h"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Incorrect number of arguments." << std::endl;
		return (-1);
	}
	ScalarConversion sc(argv[1]);
	std::cout << std::fixed << std::setprecision(1);

	try
	{
		std::cout << "char: ";
		int cast = static_cast<int>(sc);

		if (cast >= 0 && cast < 32)
			std::cout << "Non Displayable" << std::endl;
		else
			std::cout <<static_cast<char>(sc) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		std::cout << "int: ";
		int cast = static_cast<int>(sc);
		std::cout << cast << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		float cast = static_cast<float>(sc);
		std:: cout << "float: " << std::fixed << std::setprecision(1) << (cast) << "f" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		double cast = static_cast<double>(sc);
		std::cout << "double: " << cast << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}
