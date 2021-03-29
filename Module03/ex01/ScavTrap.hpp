/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztawanna <ztawanna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 07:01:13 by ztawanna          #+#    #+#             */
/*   Updated: 2021/03/27 07:01:13 by ztawanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_SCAVTRAP_HPP
#define CPP_SCAVTRAP_HPP

#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <string>

class ScavTrap
{
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap&);
	~ScavTrap();
	ScavTrap &operator=(const ScavTrap& copy);
	void 	rangedAttack(std::string const & target);
	void 	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void 	beRepaired(unsigned int amount);
	void	challengeNewcomer(std::string const & target);
private:
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

#endif //CPP_SCAVTRAP_HPP
