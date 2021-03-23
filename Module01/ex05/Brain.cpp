/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztawanna <ztawanna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 04:57:34 by ztawanna          #+#    #+#             */
/*   Updated: 2021/03/23 04:57:34 by ztawanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {}

Brain::~Brain() {}

unsigned long long  Brain::getCapacity() { return (this->_capacity); }

void                Brain::setCapacity(unsigned long long capacity) { this->_capacity = capacity; }

std::string         Brain::identify()
{
	std::stringstream address;
	address << this;
	return (address.str());
}