#include "span.hpp"

Span::Span(unsigned int size) : _size(size)
{}

Span::~Span()
{}

Span::Span(const Span &copy)
{
	*this = copy;
}

Span &Span::operator=(const Span &rhs)
{
	_size = rhs._size;
	_vect = rhs._vect;
	return *this;
}

void Span::addNumber(int value)
{
	if (_vect.size() == _size)
		throw Span::FullSpanException();
	_vect.push_back(value);
	std::sort(_vect.begin(), _vect.end());
}

int Span::longestSpan(void) const
{
	if (_vect.size() <= 1)
		throw Span::NotEnoughNumbersException();

	return (_vect.back() - _vect.front());
}

int Span::shortestSpan(void) const
{
	if (_vect.size() <= 1)
		throw Span::NotEnoughNumbersException();

	int res = _vect.back() - _vect.front();
	for (unsigned int i = 0; i < _vect.size() - 1; i++)
	{
		if (_vect[i + 1] - _vect[i] < res)
			res = _vect[i + 1] - _vect[i];
	}
	return (res);
}

const char* Span::FullSpanException::what() const throw()
{
	return "Exception: Span is already full.";
}

const char* Span::NotEnoughNumbersException::what() const throw()
{
	return "Exception: There is not enough numbers in Span.";
}