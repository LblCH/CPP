#ifndef CPP_ITER_HPP
#define CPP_ITER_HPP

# include <iostream>
# include <string>

template<typename T>
void    iter(T (*array), int size, void (*func)(T &))
{
	for (int i = 0; i < size; i++)
		func(array[i]);
}

template<typename T>
void print(T const &t)
{
	std::cout << t << std::endl;
}

template<typename T>
void addOne(T &t)
{
	t++;
}

#endif //CPP_ITER_HPP
