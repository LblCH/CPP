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

#include "Human.hpp"

Human::Human()
{
	this->_brain = new Brain();
}

Human::~Human() { delete this->_brain; }

Brain       &Human::getBrain() { return (*this->_brain); }

std::string Human::identify(void)
{
	return (this->_brain->identify());
}