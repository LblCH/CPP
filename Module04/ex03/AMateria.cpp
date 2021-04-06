
#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _type(type), _xp(0)
{}

AMateria::~AMateria()
{}

AMateria::AMateria(const AMateria &copy)
{
	*this = copy;
}

AMateria &AMateria::operator=(const AMateria &rhs)
{
	if(this != &rhs)
	{
		this->_type = rhs.getType();
		this->_xp = rhs.getXP();
	}
	return *this;
}

std::string const & AMateria::getType() const { return this->_type; }

unsigned int AMateria::getXP() const { return this->_xp; }

void AMateria::use(ICharacter &target)
{
	(void)target;
	this->_xp += 10;
}