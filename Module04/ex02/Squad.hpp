
#ifndef CPP_SQUAD_HPP
#define CPP_SQUAD_HPP

#include <cstdlib>
#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

class Squad : public ISquad
{
private:
	typedef struct	s_squad
	{
		ISpaceMarine *unit;
		struct s_squad *next;
	}				t_squad;
	int _count;
	s_squad *_squad;
	void  _copyUnits(const Squad &src);
	int _isAlreadyIn(t_squad *squad, ISpaceMarine *marine);

public:
	Squad();
	virtual ~Squad();
	Squad(const Squad &copy);
	Squad &operator=(const Squad &rhs);
	virtual int push(ISpaceMarine *marine);
	virtual int           getCount(void) const;
	virtual ISpaceMarine  *getUnit(int n) const;
};


#endif //CPP_SQUAD_HPP
