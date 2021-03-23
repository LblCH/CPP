/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztawanna <ztawanna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 21:52:46 by ztawanna          #+#    #+#             */
/*   Updated: 2021/03/22 21:52:46 by ztawanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{}

ZombieEvent::~ZombieEvent()
{}

void ZombieEvent::setZombieType(std::string type) { this->_type = type;}

Zombie	*ZombieEvent::newZombie(std::string name)
{
	return (new Zombie(name, this->_type));
}

Zombie	*ZombieEvent::randomChump()
{
	Zombie *zombie;
	std::string names[10] = {"Integer", "Character", "Float", "Bus", "Segmentation",
						  	"String", "Define", "Include", "Increment", "Decrement"};
	if (this->_type == "")
		this->setZombieType("Chumb");
	zombie = this->newZombie(names[rand() % 10]);
	return (zombie);
}