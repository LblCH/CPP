
#ifndef CPP_TACTICALMARINE_HPP
#define CPP_TACTICALMARINE_HPP

#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
public:
	TacticalMarine();
	virtual ~TacticalMarine();
	TacticalMarine(const TacticalMarine &);
	TacticalMarine &operator=(const TacticalMarine &rhs);

	ISpaceMarine* clone() const;
	void            battleCry() const;
	void            rangedAttack() const;
	void            meleeAttack() const;
};


#endif //CPP_TACTICALMARINE_HPP
