
#ifndef CPP_CHARACTER_HPP
#define CPP_CHARACTER_HPP

#include "PowerFist.hpp"
#include "PlasmaRifle.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"

class Character
{
private:
	std::string _name;
	int 	_ap;
	AWeapon *_weapon;
	Character();

public:
	Character(std::string const & name);
	~Character();
	Character(const Character &copy);
	Character &operator=(const Character &rhs);
	void recoverAP();
	void equip(AWeapon*);
	void attack(Enemy*);
	std::string const getName() const;
	int getAP() const;
	AWeapon* getWeapon() const;
};

std::ostream   &operator<<(std::ostream & o, const Character & character);

#endif //CPP_CHARACTER_HPP
