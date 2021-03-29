/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztawanna <ztawanna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/27 08:27:48 by ztawanna          #+#    #+#             */
/*   Updated: 2021/03/27 08:27:48 by ztawanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "It's a FR4G-TP " << this->_name << " !" << std::endl;
}

FragTrap::FragTrap(std::string const &name)
{
		this->_hitPoints = 100;
		this->_maxHitPoints = 100;
		this->_energyPoints = 100;
		this->_maxEnergyPoints = 100;
		this->_level = 1;
		this->_name = name;
		this->_meleeAttackDamage = 30;
		this->_rangedAttackDamage = 20;
		this->_armorDamageReduction = 5;
	std::cout << "New FR4G-TP " << this->_name << " comes to arena." << std::endl;
}

FragTrap::FragTrap(const FragTrap& copy)
{
	std::cout << "FR4G-TP cloned" << std::endl;
	*this = copy;
}

FragTrap::~FragTrap()
{
	std::cout << "FR4G-TP " << this->_name << " destroyed." << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap& copy)
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

void FragTrap::vaulthunter_dot_exe(const std::string &target)
{
	srand(time(NULL));
	if (this->_energyPoints > 24)
	{
		std::string attack[8]= {
			"FR4G-TP <" + this->_name +	"> takes REALLY BIG GUN and shoots at <" +
			target + "> dealing " +	std::to_string(35) +
			" points of damage.",
			"Angry robot <" + this->_name + "> spits few bolts into <" +
			target + "> and deal him " + std::to_string(35) + " damage.",
			"<" + this->_name + "> thoughtfully fires few bullets into " +
			"<" + target + "> causing " + std::to_string(35) +
			" points of damage.",
			"<" + target + "> takes " +	std::to_string(35) +
			" pts of dmg when FR4G-TP <" + this->_name + "> throws at him his gun.",
			"FR4G-TP <" + this->_name + "> tears away <" +	target +
			"'s> limb and hits him with her over the head, dealing " +
			std::to_string(35) + " points of damage.",
			"Robot <" + this->_name + "> picks up the nearest corpse and knocks <" +
			target + "> causing " + std::to_string(35) + " points of damage.",
			"<" + this->_name + "> tакеs Excalibur from his pocket and hardly beats up <" +
			target + "> dealing " + std::to_string(35) + " points of damage.",
			"<" + target + "> takes " + std::to_string(35) + " pts of dmg when FR4G-TP <" +
			this->_name + "> mauls him with his grenade."
		};
		std::cout << attack[rand() % 8] << std::endl;
		this->_energyPoints -= 25;
	}
	else
		std::cout << "FR4G-TP " + this->_name + " doesnt have enough energy to attack." << std::endl;
}
