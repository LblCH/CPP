#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{}

PlasmaRifle::~PlasmaRifle()
{}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &copy)
{ *this = copy; }

PlasmaRifle &PlasmaRifle::operator=(const PlasmaRifle &rhs)
{
	if (this != &rhs)
	{
		this->_damage = rhs._damage;
		this->_apcost = rhs._apcost;
		this->_name = rhs._name;
	}
	return (*this);
}

void PlasmaRifle::attack(void) const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
	return;
}