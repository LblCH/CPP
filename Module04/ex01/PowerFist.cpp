
#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("PowerFist", 8, 50)
{}

PowerFist::~PowerFist()
{}

PowerFist::PowerFist(const PowerFist &copy)
{ *this = copy; }

PowerFist& PowerFist::operator=(const PowerFist &rhs)
{
	if (this != &rhs)
	{
		this->_damage = rhs._damage;
		this->_apcost = rhs._apcost;
		this->_name = rhs._name;
	}
	return (*this);
}

void PowerFist::attack(void) const
{ std::cout << "* pschhh... SBAM! *" << std::endl; }

