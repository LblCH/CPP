/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztawanna <ztawanna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 05:41:18 by ztawanna          #+#    #+#             */
/*   Updated: 2021/03/23 05:41:18 by ztawanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {}

Weapon::Weapon(std::string type) { this->_type = type;}

Weapon::~Weapon() {}

std::string Weapon::getType() {return (this->_type);}

void 	Weapon::setType(std::string type) { this->_type = type;}