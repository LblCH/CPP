
#include "Squad.hpp"

Squad::Squad()
{
	this->_count = 0;
	this->_squad = NULL;
}

Squad::~Squad()
{
	t_squad *tmp;

	while (this->_squad)
	{
		tmp = this->_squad->next;
		delete this->_squad->unit;
		delete this->_squad;
		this->_squad = tmp;
	}
}

Squad::Squad(const Squad &copy)
{
	for(int i=0; i < copy.getCount(); i++)
		this->push(copy.getUnit(i));
}

Squad &Squad::operator=(const Squad &rhs)
{
	t_squad *tmp;

	if (this != &rhs)
	{
		while (this->_squad)
		{
			tmp = this->_squad->next;
			delete this->_squad->unit;
			delete this->_squad;
			this->_squad = tmp;
		}
		this->_copyUnits(rhs);
		this->_count = rhs._count;
	}
	return *this;
}

void Squad::_copyUnits(const Squad &src)
{
	for(int i = 0; i < src.getCount(); i++)
		push(src.getUnit(i));
}

int Squad::getCount() const
{ return this->_count; }

ISpaceMarine * Squad::getUnit(int n) const
{
	t_squad *tmp = this->_squad;
	if (n < 0 || n >= this->_count)
		return NULL;
	while (n--)
		tmp = tmp->next;
	return tmp->unit;
}

int Squad::push(ISpaceMarine *marine)
{
	t_squad *tmp = this->_squad;

	if (marine && !(this->_isAlreadyIn(this->_squad, marine)))
	{
		if (this->_squad)
		{
			while(tmp->next)
				tmp = tmp->next;
			tmp->next = new t_squad;
			tmp->next->unit = marine;
			tmp->next->next = NULL;
		}
		else
		{
			this->_squad = new t_squad;
			this->_squad->unit = marine;
			this->_squad->next = NULL;
		}
		this->_count++;
	}
	return this->_count;
}

int Squad::_isAlreadyIn(t_squad *squad, ISpaceMarine *marine)
{
	while (squad)
	{
		if (marine == squad->unit)
			return (1);
		squad = squad->next;
	}
	return (0);
}