
#ifndef CPP_AMATERIA_HPP
#define CPP_AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
private:
	std::string _type;
	unsigned int _xp;
public:
	AMateria(std::string const & type);
	virtual ~AMateria();
	AMateria(const AMateria &);
	AMateria & operator=(const AMateria &rhs);

	std::string const & getType() const; //Returns the materia type
	unsigned int getXP() const; //Returns the Materia's XP
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};


#endif //CPP_AMATERIA_HPP
