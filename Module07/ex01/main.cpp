#include "iter.hpp"

int main()
{
	int numb[] = {0,1,2,3,4,5,6,7,8,9};
	std::string str[] = { "Is", "this" , "a", "real", "task" "?"};

	std::cout << "Print std::string array :" << std::endl;
	::iter<const std::string>(str, 6, print);

	std::cout << "Print integer array : " << std::endl;
	::iter<const int>(numb, 10, print);
	std::cout << std::endl;

	::iter<int>(numb, 10, addOne);
	std::cout << "Print integer array after addOne: " << std::endl;
	::iter<const int>(numb, 10, print);
	std::cout << std::endl;

}
