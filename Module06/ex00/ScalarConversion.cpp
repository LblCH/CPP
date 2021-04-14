
#include "ScalarConversion.h"

ScalarConversion::ScalarConversion(const char *value)
{
	_value = std::string(value);
	_valueChar = value;
}

ScalarConversion::~ScalarConversion()
{}

ScalarConversion::ScalarConversion(const ScalarConversion &copy)
{
	_value = copy._value;
	_valueChar = copy._valueChar;
}

ScalarConversion &ScalarConversion::operator=(const ScalarConversion &rhs)
{
	if (this != &rhs)
	{
		_value = rhs._value;
		_valueChar = rhs._valueChar;
	}
	return *this;
}

ScalarConversion::operator char() const
{
	if (_value == "-inf" || _value == "+inf" || _value == "-inff" ||
			_value == "+inff" || _value == "nan"|| _value == "nanf")
		throw ConversionError();
	char *endptr;
	int i;
	double d;
	try
	{
		d = std::strtod(_valueChar, &endptr);
		if (d < 32)
		{
			if ((i = _value.length()) == 1)
				return static_cast<char>(_valueChar[0]);
			else
				throw ConversionError();
		}
	}
	catch (const std::exception &e)
	{
		throw ConversionError();
	}
	try
	{
		if (d < std::numeric_limits<char>::min() ||
					d > std::numeric_limits<char>::max())
			throw Overflow();
	}
	catch (const std::exception &e)
	{
		throw Overflow();
	}
	return static_cast<char>(d);
}

ScalarConversion::operator int() const
{
	if (_value == "+inf" || _value == "-inf" || _value == "+inff" ||
	_value ==  "-inff" ||	_value == "nan" || _value == "nanf")
		throw ConversionError();

	char *endptr;
	bool fail = false;
	double d;
	try
	{
		d = std::strtod(_valueChar, &endptr);
		if(d == 0)
		{
			int i = 0;
			while (_valueChar[i] && !fail)
				if(isdigit(_valueChar[i]))
					i++;
				else
					fail = true;
			if (i == 1 || !fail)
			{
				if (_valueChar[0] == '0')
					return static_cast<int>(0);
				return static_cast<int>(_valueChar[0]);
			}
			else
				throw ConversionError();
		}
	}
	catch(const std::exception& e)
	{
		throw ConversionError();
	}
	try
	{
		if (d > std::numeric_limits<int>::max() ||
				d < std::numeric_limits<int>::min())
			throw Overflow();
	}
	catch(const std::exception& e)
	{
		throw Overflow();
	}
	return static_cast<int>(d);
}

ScalarConversion::operator double() const
{
	char *endptr;
	bool fail = false;
	double d;
	try
	{
		if((d = std::strtod(_valueChar, &endptr)) == 0)
		{
			int i = 0;
			while(_valueChar[i] && !fail)
			{
				if (isdigit(_valueChar[i]))
					i++;
				else
					fail = true;
			}

			if (i == 1 || !fail)
			{
				if (_valueChar[0] == '0')
					return static_cast<double>(0);
				return static_cast<double>(_valueChar[0]);
			}
			else
				throw ConversionError();
		}
	}
	catch(const std::exception &e)
	{
		throw ConversionError();
	}
	return static_cast<double>(d);
}

ScalarConversion::operator float() const
{
	char *endptr;
	bool fail = false;
	double d;
	try
	{
		if((d = std::strtod(_valueChar, &endptr)) == 0)
		{
			int i = 0;
			while(_valueChar[i] && !fail)
			{
				if (isdigit(_valueChar[i]))
					i++;
				else
					fail = true;
			}

			if (i == 1 || !fail)
			{
				if (_valueChar[0] == '0')
					return static_cast<float>(0);
				return static_cast<float>(_valueChar[0]);
			}
			else
				throw ConversionError();
		}
	}
	catch(const std::exception& e)
	{
		throw ConversionError();
	}
	return static_cast<float>(d);
}

const char *ScalarConversion::ConversionError::what() const throw()
{
	return ("impossible");
}

const char *ScalarConversion::Overflow::what() const throw()
{
	return ("impossible");
}