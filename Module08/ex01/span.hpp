#ifndef CPP_SPAN_HPP
#define CPP_SPAN_HPP

#include <string>
#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>

class Span
{
private:
	Span();
	unsigned int        _size;
	std::vector<int>    _vect;

public:
	Span(unsigned int );
	virtual ~Span();
	Span(const Span &);
	Span &operator=(const Span &rhs);

	template<typename InputIterator>
	void 	addNumber(InputIterator begin, InputIterator end)
	{
		if (_vect.size() + std::distance(begin, end) > _size)
			throw Span::FullSpanException();
		_vect.insert(_vect.begin(),begin, end);
		std::sort(_vect.begin(), _vect.end());
	}
	void    addNumber(int);
	int     shortestSpan() const;
	int     longestSpan() const;

	class FullSpanException: public std::exception
	{
		virtual const char* what() const throw();
	};

	class NotEnoughNumbersException: public std::exception {
		virtual const char* what() const throw();
	};
};

#endif //CPP_SPAN_HPP
