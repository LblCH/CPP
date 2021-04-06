
#ifndef CPP_IMATERIASOURCE_HPP
#define CPP_IMATERIASOURCE_HPP

#include <iostream>

class IMateriaSource
{
public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif //CPP_IMATERIASOURCE_HPP
