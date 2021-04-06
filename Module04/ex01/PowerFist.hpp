
#ifndef CPP_POWERFIST_HPP
#define CPP_POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
public:
	PowerFist();
	virtual ~PowerFist();
	PowerFist(const PowerFist &);
	PowerFist &operator=(const PowerFist &copy);
	void	attack() const;
};


#endif //CPP_POWERFIST_HPP
