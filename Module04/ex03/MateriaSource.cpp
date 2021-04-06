
#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->_templates[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		if (this->_templates[i] != NULL)
			delete this->_templates[i];
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	for (int i = 0; i < 4; i++)
		if (copy._templates[i])
			this->_templates[i] = copy._templates[i];
}

MateriaSource &MateriaSource::operator=(const MateriaSource &rhs)
{
	if (this != &rhs)
		for (int i = 0; i < 4; i++)
			if (rhs._templates[i])
				this->_templates[i] = rhs._templates[i];
	return *this;
}

void		MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_templates[i] != NULL)
		{
			this->_templates[i] = m;
			break;
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	if (type == "ice")
	{
		return (new Ice());
	}
	else if (type == "cure")
	{
		return (new Cure());
	}
	return (NULL);
//	for (int i = 0; i < 4; i++)
//		if (this->_templates[i] != NULL	&& this->_templates[i]->getType() == type)
//			return (this->_templates[i]->clone());
//	return (0);
}