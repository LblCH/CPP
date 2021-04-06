
#ifndef CPP_SUPERMUTANT_HPP
#define CPP_SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant : public Enemy
{
public:
	SuperMutant();
	virtual ~SuperMutant();
	SuperMutant(const SuperMutant &copy);
	SuperMutant &operator=(const SuperMutant &rhs);
};


#endif //CPP_SUPERMUTANT_HPP
