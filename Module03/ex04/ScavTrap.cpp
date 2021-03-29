/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztawanna <ztawanna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 08:27:48 by ztawanna          #+#    #+#             */
/*   Updated: 2021/03/27 08:27:48 by ztawanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "New SC4V-TP <" << this->_name << "> comes to arena." << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
		this->_hitPoints = 100;
		this->_maxHitPoints = 100;
		this->_energyPoints = 50;
		this->_maxEnergyPoints = 50;
		this->_level = 1;
		this->_name = name;
		this->_meleeAttackDamage = 20;
		this->_rangedAttackDamage = 15;
		this->_armorDamageReduction = 3;
	std::cout << "New SC4V-TP <" << this->_name << "> comes to arena." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy)
{
	std::cout << "SC4V-TP cloned" << std::endl;
	*this = copy;
}

ScavTrap &ScavTrap::operator=(const ScavTrap& copy)
{
	if (this == &copy)
		return (*this);
	this->_hitPoints = copy._hitPoints;
	this->_maxHitPoints = copy._maxHitPoints;
	this->_energyPoints = copy._energyPoints;
	this->_maxEnergyPoints = copy._maxEnergyPoints;
	this->_level = copy._level;
	this->_name = copy._name;
	this->_meleeAttackDamage = copy._meleeAttackDamage;
	this->_rangedAttackDamage = copy._rangedAttackDamage;
	this->_armorDamageReduction = copy._armorDamageReduction;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "SC4V-TP <" << this->_name << "> destroyed." << std::endl;
}

void ScavTrap::challengeNewcomer(const std::string &target)
{
	std::string quest[5]= {
		"SC4V-TP <" + this->_name +	"> gives very important quest to <" +
		target + "> to wash the floors.",
		"Pensive robot <" + this->_name + "> give few bolts to <" +
		target + "> and asks him to carry them to robot's mom.",
		"<" + this->_name + "> asks " +	"<" + target + "> to scratch his back.",
		"<" + target + "> gets quest from SC4V-TP <" + this->_name +
		">: come up with quest to New Comers",
		"SC4V-TP <" + this->_name + "> crying. <" +	target +
		"> New Comer have to find a way to cheer up him."
	};
	std::cout << quest[rand() % 5] << std::endl;
}


