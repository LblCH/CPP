#include "Array.hpp"
#include <iostream>

int main()
{
	Array<int> j(5);
	Array<std::string> str(2);

	str[0] = "test";
	str[1] = "numb";

	std::cout << "String array content : " << std::endl;
	for (int i = 0; i < str.size(); i++)
		std::cout << "str[" << i << "] = " << str[i] << std::endl;

	std::cout << std::endl;
	std::cout << "Copy str :" << std::endl;
	Array<std::string> strcopy(str);
	std::cout << "Change str[0] to \"ololo\"" << std::endl;
	str[0] = "ololo";
	std::cout << "strcopy[0] = " << strcopy[0] << std::endl;
	std::cout << "str[0] = " << str[0] << std::endl;

	std::cout << std::endl;
	std::cout << "Int array content : " << std::endl;
	for (int i = 0; i < j.size(); i++)
		std::cout << "j[" << i << "] = " << j[i] << std::endl;

	std::cout << std::endl;
	Array<int> intassign = j;
	std::cout << "Int array content : " << std::endl;
	for (int i = 0; i < j.size(); i++)
		std::cout << "intassign[" << i << "] = " << intassign[i] << std::endl;

	std::cout << std::endl;
	std::cout << "Modify value (previous + 1): " << std::endl;
	for (int i = 0; i < j.size(); i++)
		if (i != 0)
			intassign[i] = intassign[i - 1] + 1;
	for (int i = 0; i < j.size(); i++)
		std::cout << "intassign[" << i << "] = " << intassign[i] << std::endl;

	std::cout << std::endl;
	try
	{
		std::cout << "See out of the limits : " << std::endl;
		std::cout << "jx = " << j[j.size() + 1] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}
