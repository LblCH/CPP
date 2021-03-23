/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztawanna <ztawanna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 21:52:46 by ztawanna          #+#    #+#             */
/*   Updated: 2021/03/22 21:52:46 by ztawanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde()
{}

ZombieHorde::ZombieHorde(int n)
{
	if (n < 0 || n >= 2147483647)
	{
		std::cout << "Incorrect horde size. Summoning small horde." << std::endl;
		n = 10;
	}
	this->_size = n;
	this->_zombies = new Zombie[n];
	for (int i=0; i < n; i++)
	{
		this->setZombieType("horde");
		this->_zombies[i].setZombieName(this->randomName());
	}
}

ZombieHorde::~ZombieHorde() { delete [] _zombies;}

void ZombieHorde::setZombieType(std::string type) { this->_type = type;}

void ZombieHorde::announce()
{
	for (int i = 0; i < this->_size; i++)
		this->_zombies[i].announce();
}

std::string		ZombieHorde::randomName()
{
	std::string name;

	std::string names[10] = {"Integer", "Character", "Float", "Bus", "Segmentation",
						  	"String", "Define", "Include", "Increment", "Decrement"};
	name = names[rand() % 10];
	return (name);
}