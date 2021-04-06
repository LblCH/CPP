
#ifndef CPP_PEON_HPP
#define CPP_PEON_HPP

#include "Victim.hpp"

class Peon : public Victim
{
private:
	Peon();

public:
	Peon(std::string const &name);
	virtual ~Peon();
	Peon(const Peon &);
	Peon &operator=(const Peon &copy);
	virtual void getPolymorphed() const;
};

std::ostream & operator<<(std::ostream &o, Peon &rhs);


#endif //CPP_PEON_HPP
