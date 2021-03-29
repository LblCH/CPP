/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztawanna <ztawanna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 20:47:53 by ztawanna          #+#    #+#             */
/*   Updated: 2021/03/28 20:47:53 by ztawanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "<System>: New robot " << this->_name << " comes to arena." << std::endl;
}

ClapTrap::ClapTrap(std::string name)
		:
		_hitPoints(100),
		_maxHitPoints(100),
		_energyPoints(50),
		_maxEnergyPoints(50),
		_level(1),
		_name(name),
		_meleeAttackDamage(20),
		_rangedAttackDamage(15),
		_armorDamageReduction(3)
{
	std::cout << "<System>: New robot " << this->_name << " comes to arena." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
	std::cout << "<System>: Robot cloned" << std::endl;
	*this = copy;
}

ClapTrap::~ClapTrap()
{
	std::cout << "<System>: " + this->_name + " destroyed." << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap& copy)
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

void ClapTrap::meleeAttack(const std::string &target)
{
	std::cout << "<" + this->_name + "> simply punches <" +
				target + "> dealing " + std::to_string(this->_meleeAttackDamage)
				+ " points of damage." << std::endl;
}

void ClapTrap::rangedAttack(std::string const & target)
{
	std::cout << "<" + this->_name + "> unscrews its gear and throws it into <" +
				 target + "> causing " + std::to_string(this->_rangedAttackDamage) +
				 " points of damage." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (amount > 4 && (this->_hitPoints -= (amount - this->_armorDamageReduction)) < 0)
		this->_hitPoints = 0;
	std::cout << "<" + this->_name + "> now have " + std::to_string(this->_hitPoints) + " hit points."
			  << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if ((this->_hitPoints += amount) > 100)
		this->_hitPoints = 100;
	std::cout << "<" + this->_name << " repaired and now have " << this->_hitPoints << " hit points."
			  << std::endl;
}
