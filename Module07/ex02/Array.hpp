#ifndef CPP_ARRAY_HPP
#define CPP_ARRAY_HPP

# include <exception>
# include <cctype>

template<class T>
class Array
{
private:
	T       *_array;
	int     _size;

public:
	Array();
	Array(unsigned int n);
	Array(const Array& copy);
	virtual ~Array();
	Array &operator=(const Array& op);
	T& operator[](unsigned int i);

	int     size() const;

	class ArrayAccess : public std::exception
	{
		virtual const char* what() const throw();
	};
};

#include "Array.ipp"

#endif //CPP_ARRAY_HPP
