/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztawanna <ztawanna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 16:28:10 by ztawanna          #+#    #+#             */
/*   Updated: 2021/03/29 16:28:10 by ztawanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap()
{
	std::cout << "New 9JA-TP <" << this->_name << "> comes to arena." << std::endl;
}

NinjaTrap::NinjaTrap(std::string name)
{
	this->_hitPoints = 60;
	this->_maxHitPoints = 60;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_level = 1;
	this->_name = name;
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 5;
	this->_armorDamageReduction = 0;
	std::cout << "New 9JA-TP <" << this->_name << "> comes to arena." << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap& copy)
{
	std::cout << "9-JA-TP cloned" << std::endl;
	*this = copy;
}

NinjaTrap &NinjaTrap::operator=(const NinjaTrap& copy)
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

NinjaTrap::~NinjaTrap()
{
	std::cout << "9JA-TP <" << this->_name << "> destroyed." << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap &clap)
{
	std::cout << "<" + this->_name + "> in complete shock looks at own reflection named "
	+ clap._name << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap &clap)
{
	clap.challengeNewcomer(this->_name);
	std::cout << "<" + this->_name + "> gives to SC4V-TP quest in gesture of reciprocal courtesy." << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap &clap)
{
	clap.rangedAttack(this->_name);
	std::cout << "<" + this->_name + ">: Mmm. One more frag for FR4G? Nah." << std::endl;
}

void NinjaTrap::ninjaShoebox(ClapTrap &clap)
{
	std::cout << "<" + this->_name + ">: Join the Robolution! Viva la Pandora! Here, get some repair."
	<< std::endl;
	clap.beRepaired(5);
}