/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztawanna <ztawanna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 04:57:43 by ztawanna          #+#    #+#             */
/*   Updated: 2021/03/23 04:57:43 by ztawanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _weapon(weapon)
{}

HumanA::~HumanA() {}

void HumanA::attack()
{
	std::cout << this->_name << " attack with his " << this->_weapon.getType();
	std::cout << "." << std::endl;
}