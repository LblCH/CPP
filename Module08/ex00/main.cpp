#include "easyfind.hpp"
#include <vector>
#include <list>

int main()
{
	srand(time(NULL));

	std::vector<int> myVect;
	for (int i=0; i < 10; i++)
		myVect.push_back(rand()%10);

	std::cout << "Test 1 (vector)" << std::endl;
	try
	{
		std::cout << *easyfind(myVect, 2) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\nTest 2 (vector)" << std::endl;

	try
	{
		std::cout << *easyfind(myVect, 20) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::list<int> list;
	for (int i=0; i < 10; i++)
		list.push_back(rand()%10);

	std::cout << "\nTest 3 (list)" << std::endl;
	try
	{
		std::cout << *easyfind(myVect, 3) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\nTest 4 (list)" << std::endl;
	try
	{
		std::cout << *easyfind(list, 15) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}