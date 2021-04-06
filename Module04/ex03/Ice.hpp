
#ifndef CPP_ICE_HPP
#define CPP_ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice();
	virtual ~Ice();
	Ice(const Ice &);
	Ice &operator=(const Ice &rhs);
	AMateria*   clone() const;
	void        use(ICharacter& target);
};

#endif //CPP_ICE_HPP
