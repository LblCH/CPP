
#ifndef CPP_MATERIASOURCE_HPP
#define CPP_MATERIASOURCE_HPP

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria*       _templates[4];

public:
	MateriaSource();
	virtual ~MateriaSource();
	MateriaSource(const MateriaSource &);
	MateriaSource &operator=(const MateriaSource &rhs);
	virtual void learnMateria(AMateria*);
	virtual AMateria* createMateria(std::string const & type);
};


#endif //CPP_MATERIASOURCE_HPP
