
#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;

}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &copy)
{
	*this = copy;
}

SuperMutant & SuperMutant::operator=(const SuperMutant &rhs)
{
	if (this != &rhs)
	{
		this->_hp = rhs.getHP();
		this->_type = rhs.getType();
	}
	return *this;
}