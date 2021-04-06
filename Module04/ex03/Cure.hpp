
#ifndef CPP_CURE_HPP
#define CPP_CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure();
	virtual ~Cure();
	Cure(const Cure &);
	Cure &operator=(const Cure &rhs);
	AMateria *clone() const;
	void	use(ICharacter &target);
};


#endif //CPP_CURE_HPP
