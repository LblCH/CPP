#include "whatever.hpp"

int main()
{
	int     a, b;
	char    e, f;
	double  g, h;

	std::cout << std::endl;
	a = 10;
	b = 20;
	std::cout << "Swap a = " << a << " && b = " << b << " : " << std::endl;
	::swap(a, b);
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;

	std::cout << std::endl;
	g = 8.65;
	h = 12.555;
	std::cout << "Swap g = " << g << " && h = " << h << " : " << std::endl;
	::swap(g, h);
	std::cout << "g = " << g << std::endl;
	std::cout << "h = " << h << std::endl;

	std::cout << std::endl;
	e = 'e';
	f = 'f';
	std::cout << "Swap e = " << e << " && f = " << f << " : " << std::endl;
	::swap(e, f);
	std::cout << "e = " << e << std::endl;
	std::cout << "f = " << f << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	std::cout << std::endl;
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	std::cout << "a = " << a << " b = " << b << " : " << std::endl;
	std::cout << "Min ( a, b ) = " << min(a, b) << std::endl;

	::swap(g, h);
	std::cout << "g = " << g << ", h = " << h << " : " << std::endl;
	std::cout << "Min ( g, h ) = " << min(g, h) << std::endl;

	std::cout << "e = " << e << ", f = " << f << " : " << std::endl;
	std::cout << "Min ( e, f ) = " << min(e, f) << std::endl;

	a = -157;
	b = 85694;
	std::cout << "a = " << a << ", b = " << b << " : " << std::endl;
	std::cout << "Max ( a, b ) = " << max(a, b) << std::endl;

	g = 896.68842;
	h = 17.66;
	std::cout << "g = " << g << ", h = " << h << " : " << std::endl;
	std::cout << "Max ( g, h ) = " << max(g, h) << std::endl;

	e = 'A';
	f = 'a';
	std::cout << "e = " << e << ", f = " << f << " : " << std::endl;
	std::cout << "Max ( e, g ) = " << max(e, f) << std::endl;

	return (0);
}
