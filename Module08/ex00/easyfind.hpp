#ifndef CPP_EASYFIND_HPP
#define CPP_EASYFIND_HPP

#include <string>
#include <iostream>
#include <algorithm>
#include <iterator>

class NotFound : public std::exception
{
	virtual const char* what() const throw()
	{
		return ("Occurence not found.");
	}
};

template <typename T>
typename T::iterator       easyfind(T & container, int n)
{
	typename T::iterator it;
	it = std::find(container.begin(), container.end(), n);
	if (it == container.end())
		throw NotFound();
	return it;
}

#endif //CPP_EASYFIND_HPP
