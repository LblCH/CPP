#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::~Ice()
{
}

Ice::Ice(const Ice &copy) : AMateria(copy)
{}

Ice &Ice::operator=(const Ice &rhs)
{
	if (this != &rhs)
		AMateria::operator=(rhs);
	return *this;
}

AMateria *Ice::clone() const { return (new Ice(*this)); }

void 	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " + target.getName() + " *"<< std::endl;
	AMateria::use(target);
}