
#include "AWeapon.hpp"

AWeapon::AWeapon()
{}

AWeapon::AWeapon(std::string const & name, int apcost, int damage):
	_name(name),
	_damage(damage),
	_apcost(apcost)
{}

AWeapon::~AWeapon()
{
}

AWeapon::AWeapon(const AWeapon &copy)
{
	*this = copy;
}

AWeapon &AWeapon::operator=(const AWeapon &rhs)
{
	if (this != &rhs)
	{
		this->_damage = rhs._damage;
		this->_apcost = rhs._apcost;
		this->_name = rhs._name;
	}
	return (*this);
}

std::string const	AWeapon::getName() const { return (this->_name);}

int 			AWeapon::getAPCost() const { return (this->_apcost); }

int				AWeapon::getDamage() const { return (this->_damage); }