
#include "Character.hpp"

Character::Character()
{}

Character::Character(std::string const &name) : _name(name)
{
	this->_ap = 40;
	this->_weapon = NULL;
}

Character::~Character()
{
}

Character::Character(const Character &copy)
{
	*this = copy;
}

Character &Character::operator=(const Character &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs.getName();
		this->_ap = rhs.getAP();
		this->_weapon = rhs.getWeapon();
	}
	return *this;
}

void Character::recoverAP()
{
	if ((this->_ap += 10) > 40)
		this->_ap = 40;
}

void Character::equip(AWeapon *weapon)
{ this->_weapon = weapon; }

void Character::attack(Enemy *enemy)
{
	if (this->_weapon != NULL &&  enemy != NULL && this->_ap >= this->_weapon->getAPCost())
	{
		std::cout << this->_name + " attack " + enemy->getType() + " with a " +
					 this->_weapon->getName() <<std::endl;
		this->_weapon->attack();
		enemy->takeDamage(this->_weapon->getDamage());
		this->_ap -= this->_weapon->getAPCost();
		if (enemy->getHP() < 1)
			delete enemy;
	}
}

std::string const Character::getName() const
{ return this->_name; }

int Character::getAP() const
{ return this->_ap; }

AWeapon * Character::getWeapon() const
{ return this->_weapon; }

std::ostream   &operator<<(std::ostream & o, const Character & character)
{
	std::string weapon;
	o << character.getName() + " has " +
	std::to_string(character.getAP()) + " AP";
	if (character.getWeapon() != NULL)
		o << " and wields a " + character.getWeapon()->getName() << std::endl;
	else
		o << " and is unarmed" << std::endl;
	return (o);
}