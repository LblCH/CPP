
#include "Character.hpp"

Character::Character(std::string const name) : _name(name)
{
	for(int i =0; i < 4; i++)
		_sphere[i] = NULL;
}

Character::~Character()
{
	for(int i =0; i < 4; i++)
	{
		if (_sphere[i])
			delete _sphere[i];
		_sphere[i] = NULL;
	}
}

Character::Character(const Character &copy)
{
	for(int i =0; i < 4; i++)
	{
		if (_sphere[i])
			delete _sphere[i];
		_sphere[i] = NULL;
	}
	for(int i =0; i < 4; i++)
	{
		if (copy._sphere[i])
			this->_sphere[i] = copy._sphere[i]->clone();
	}
	this->_name = copy.getName();
}

Character &Character::operator=(const Character &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs.getName();
		for (int i = 0; i < 4; i++)
			if (rhs._sphere[i])
				this->_sphere[i] = rhs._sphere[i];
			else
				this->_sphere[i] = NULL;
	}
	return *this;
}

std::string const & Character::getName() const { return  this->_name; }

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_sphere[i] == NULL)
		{
			this->_sphere[i] = m;
			break;
		}
	}
}

void Character::unequip(int idx)
{
	if (this->_sphere[idx])
		this->_sphere[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (this->_sphere[idx])
		this->_sphere[idx]->use(target);
}
