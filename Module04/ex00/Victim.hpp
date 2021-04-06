
#ifndef CPP_VICTIM_HPP
#define CPP_VICTIM_HPP

#include <iostream>

class Victim
{
public:
	Victim(std::string const & name);
	virtual ~Victim();
	Victim(Victim &);
	Victim &operator=(const Victim &copy);
	std::string getName() const;
	virtual void getPolymorphed() const;

protected:
	std::string _name;
	Victim();
};

std::ostream & operator<<(std::ostream &o, Victim &rhs);

#endif //CPP_VICTIM_HPP
