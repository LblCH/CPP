
#ifndef CPP_ASSAULTTERMINATOR_HPP
#define CPP_ASSAULTTERMINATOR_HPP

#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
public:
	AssaultTerminator();
	virtual ~AssaultTerminator();
	AssaultTerminator(const AssaultTerminator &);
	AssaultTerminator &operator=(const AssaultTerminator &rhs);

	ISpaceMarine*	clone() const;
	void            battleCry() const;
	void            rangedAttack() const;
	void            meleeAttack() const;
};


#endif //CPP_ASSAULTTERMINATOR_HPP
