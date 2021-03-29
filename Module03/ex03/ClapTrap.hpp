//
// Created by Zeddmore Tawanna on 3/28/21.
//

#ifndef CPP_CLAPTRAP_HPP
#define CPP_CLAPTRAP_HPP

#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <string>

class ClapTrap
{
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap&);
	~ClapTrap();
	ClapTrap &operator=(const ClapTrap& copy);
	void 	rangedAttack(std::string const & target);
	void 	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void 	beRepaired(unsigned int amount);

protected:
	int 	_hitPoints;
	int		_maxHitPoints;
	int 	_energyPoints;
	int 	_maxEnergyPoints;
	int 	_level;
	std::string _name;
	int 	_meleeAttackDamage;
	int 	_rangedAttackDamage;
	int 	_armorDamageReduction;
};

#endif //CPP_CLAPTRAP_HPP
