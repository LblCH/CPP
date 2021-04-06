
#ifndef CPP_AWEAPON_HPP
#define CPP_AWEAPON_HPP

#include <iostream>

class AWeapon
{
protected:
	std::string _name;
	int			_damage;
	int 		_apcost;
	AWeapon();

public:
	AWeapon(std::string const & name, int apcost, int damage);
	virtual ~AWeapon();
	AWeapon(const AWeapon &);
	AWeapon &operator=(const AWeapon &copy);
	std::string const	getName() const;
	int 				getAPCost() const;
	int					getDamage() const;
	virtual void attack() const = 0;
};


#endif //CPP_AWEAPON_HPP
