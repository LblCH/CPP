/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztawanna <ztawanna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 07:01:13 by ztawanna          #+#    #+#             */
/*   Updated: 2021/03/27 07:01:13 by ztawanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_FRAGTRAP_HPP
#define CPP_FRAGTRAP_HPP

#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <string>

class FragTrap
{
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap&);
	~FragTrap();
	FragTrap &operator=(const FragTrap& copy);
	void 	rangedAttack(std::string const & target);
	void 	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void 	beRepaired(unsigned int amount);
	void	vaulthunter_dot_exe(std::string const & target);
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

#endif //CPP_FRAGTRAP_HPP
