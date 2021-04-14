#ifndef CPP_SCALARCONVERSION_H
#define CPP_SCALARCONVERSION_H

#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <cctype>
#include <cmath>
#include <limits>

class ScalarConversion
{
private:
	ScalarConversion();
	std::string _value;
	const char *_valueChar;

public:
	ScalarConversion(const char *);
	virtual ~ScalarConversion();
	ScalarConversion(const ScalarConversion &);
	ScalarConversion &operator=(const ScalarConversion &rhs);

	operator char() const;
	operator int() const;
	operator double() const;
	operator float() const;

	class ConversionError : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};

	class Overflow : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};
};


#endif //CPP_SCALARCONVERSION_H
