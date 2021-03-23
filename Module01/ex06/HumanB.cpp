/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztawanna <ztawanna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 05:31:05 by ztawanna          #+#    #+#             */
/*   Updated: 2021/03/23 05:31:05 by ztawanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB() {}

HumanB::HumanB(std::string name): _name(name) {}

HumanB::~HumanB() {}

void HumanB::setWeapon(Weapon &weapon) {this->_weapon = &weapon;}

void HumanB::attack()
{
	std::cout << this->_name << " attack with his " << this->_weapon->getType();
	std::cout << "." << std::endl;
}