#include "span.hpp"

int main()
{
	srand(time(NULL));

	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << "Span 1 : " << sp.shortestSpan() << ", "
			  << sp.longestSpan() << std::endl;

	Span sp1 = Span(50);
	for (int i = 0; i < 50; i++)
		sp1.addNumber(i);
	std::cout << "Span 2 : " << sp1.shortestSpan() << ", "
			  << sp1.longestSpan() << std::endl;

	Span sp2 = Span(100000);
	try
	{
		std::vector<int> tmp;
		Span sp2 = Span(100000);
		for (int i = 0; i < 100000; i++)
			tmp.push_back(rand() % 10000);
		sp2.addNumber(tmp.begin(), tmp.end());
		std::cout << "Span 3 : " << sp2.shortestSpan() << ", "
				  << sp2.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		sp2.addNumber(500);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	Span sp3(3);
	try
	{
		std::cout << "Span 4 : " << sp3.shortestSpan() << ", "
				  << sp3.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}