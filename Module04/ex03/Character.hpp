
#ifndef CPP_CHARACTER_HPP
#define CPP_CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
private:
	Character();
	std::string _name;
	AMateria *_sphere[4];

public:
	Character(std::string const name);
	virtual ~Character();
	Character(const Character &);
	Character &operator=(const Character &rhs);

	virtual std::string const & getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
};


#endif //CPP_CHARACTER_HPP
