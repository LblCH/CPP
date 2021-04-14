#include "Array.hpp"

template<typename T>
const char* Array<T>::ArrayAccess::what() const throw()
{ return ("Out of the limits of array."); }

template<typename T>
Array<T>::Array() :
_array(new T[0]()), _size(0)
{}

template<typename T>
Array<T>::Array(unsigned int n) :
_array(new T[n]()),
_size(n)
{}

template<typename T>
Array<T>::Array(const Array& copy)
{
	this->_array = new T[copy.size()]();
	this->_size = copy.size();
	for (int i = 0; i < this->size(); i++)
		this->_array[i] = copy._array[i];
}

template<typename T>
Array<T>::~Array()
{ delete [] _array; }

template<typename T>
Array<T> &Array<T>::operator=(const Array<T> & rhs)
{
	if (this == rhs)
		return (this);
	this->_array = new T[rhs.size()]();
	this->_size = rhs.size();
	for (int i = 0; i < this->size(); i++)
		this->_array[i] = rhs._array[i];
	return (this);
}

template<typename T>
int     Array<T>::size(void) const
{ return (this->_size); }

template<typename T>
T &Array<T>::operator[](unsigned int i)
{
	if (i > static_cast<unsigned int>(this->_size) - 1)
		throw ArrayAccess();
	return (this->_array[i]);
}