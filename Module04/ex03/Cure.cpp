#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{}

Cure::~Cure()
{
}

Cure::Cure(const Cure &copy) : AMateria(copy)
{}

Cure &Cure::operator=(const Cure &rhs)
{
	if (this != &rhs)
		AMateria::operator=(rhs);
	return *this;
}

AMateria *Cure::clone() const { return (new Cure(*this)); }

void 	Cure::use(ICharacter &target)
{
	std::cout << "* heals " + target.getName() + "'s wounds *" << std::endl;
	AMateria::use(target);
}