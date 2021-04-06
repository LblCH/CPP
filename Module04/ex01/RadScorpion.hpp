
#ifndef CPP_RADSCORPION_HPP
#define CPP_RADSCORPION_HPP

#include "Enemy.hpp"

class RadScorpion : public Enemy
{
public:
	RadScorpion();
	virtual ~RadScorpion();
	RadScorpion(const RadScorpion &copy);
	RadScorpion &operator=(const RadScorpion &rhs);
};


#endif //CPP_RADSCORPION_HPP
