
#include "Peon.hpp"

Peon::Peon()
{}

Peon::Peon(std::string const &name) : Victim(name)
{
	this->_name = name;
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

Peon::Peon(const Peon &copy)
{
	this->_name = copy.getName();
	std::cout << "Copy victim called " + this->_name
	+ " just appeared!" << std::endl;
}

void Peon::getPolymorphed() const
{
	std::cout << this->_name + " has been turned into a pink pony!" << std::endl;
}

Peon & Peon::operator=(const Peon &copy)
{
	if (this != &copy)
		this->_name = copy.getName();
	return (*this);
}

std::ostream &operator<<(std::ostream & o, Peon & peon)
{
	o << "I am " << peon.getName() + " and i like otters" << std::endl;
	return (o);
}