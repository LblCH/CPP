#ifndef CPP_SERIALIZATION_H
#define CPP_SERIALIZATION_H

# include <iostream>
# include <string>
# include <cstdlib>

struct Data
{
	std::string s1;
	int n;
	std::string s2;
};

void *      serialize(void);
Data *      deserialize(void * raw);

#endif //CPP_SERIALIZATION_H
