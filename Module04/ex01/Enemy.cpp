
#include "Enemy.hpp"

Enemy::Enemy()
{}

Enemy::Enemy(int hp, const std::string& type) :
	_hp(hp),
	_type(type)
{
}

Enemy::~Enemy()
{}

Enemy::Enemy(const Enemy &copy)
{
	*this = copy;
}

Enemy &Enemy::operator=(const Enemy &rhs)
{
	if (this != &rhs)
	{
		this->_hp = rhs._hp;
		this->_type = rhs._type;
	}
	return *this;
}

int Enemy::getHP() const { return this->_hp; }

std::string const Enemy::getType() const { return this->_type; }

void Enemy::takeDamage(int dmg)
{
	if ((this->_hp -= dmg) < 0)
		this->_hp = 0;
}