
#ifndef CPP_PLASMARIFLE_HPP
#define CPP_PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
public:
	PlasmaRifle();
	virtual ~PlasmaRifle();
	PlasmaRifle(const PlasmaRifle &);
	PlasmaRifle &operator=(const PlasmaRifle &copy);
	virtual void attack() const;
};


#endif //CPP_PLASMARIFLE_HPP
