/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztawanna <ztawanna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 17:50:04 by ztawanna          #+#    #+#             */
/*   Updated: 2021/03/29 17:50:04 by ztawanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap():
	ClapTrap(), FragTrap(), NinjaTrap()
{
	std::cout << "Its a SUPR-TP <" << this->_name << "> comes to arena!" << std::endl;
}

SuperTrap::SuperTrap(std::string name):
	ClapTrap(name), FragTrap(name), NinjaTrap(name)
{
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_level = 1;
	this->_name = name;
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;
	std::cout << "New SUPR-TP <" << this->_name << "> comes to arena." << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap& copy)
{
	std::cout << "SUPR-TP cloned" << std::endl;
	*this = copy;
}

SuperTrap &SuperTrap::operator=(const SuperTrap& copy)
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

SuperTrap::~SuperTrap()
{
	std::cout << "SUPR-TP <" << this->_name << "> destroyed." << std::endl;
}

void SuperTrap::meleeAttack(std::string const &target)
{
	NinjaTrap::meleeAttack(target);
}

void SuperTrap::rangedAttack(std::string const &target)
{
	FragTrap::rangedAttack(target);
}