
#include "Victim.hpp"

Victim::Victim()
{}

Victim::Victim(std::string const & name):
	_name(name)
{
	std::cout << "Some random victim called " + this->_name
	+ " just appeared!" << std::endl;
}

Victim::~Victim()
{
	std::cout <<"Victim " + this->_name +
	" just died for no apparent reason!" << std::endl;
}

Victim::Victim(Victim &copy)
:
	_name(copy.getName())
{
	std::cout << "Copy victim called " + this->_name + " just appeared!"
	<< std::endl;
}

Victim & Victim:: operator=(const Victim &copy)
{
	if (this != &copy)
		this->_name = copy.getName();
	return (*this);
}

std::string Victim::getName() const { return (this->_name);}

void Victim::getPolymorphed() const
{
	std::cout << this->_name + " has been turned into a cute little sheep!" << std::endl;
}

std::ostream &operator<<(std::ostream & o, Victim & victim)
{
	o << "I am " << victim.getName() + " and i like otters" << std::endl;
	return (o);
}