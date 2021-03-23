/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztawanna <ztawanna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 21:52:42 by ztawanna          #+#    #+#             */
/*   Updated: 2021/03/22 21:52:42 by ztawanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{}

Zombie::Zombie(std::string name, std::string type):
	_name(name),
	_type(type)
{}

Zombie::~Zombie()
{
	std::cout << "Zombie " + this->_name + " falls down." << std::endl;
}

void Zombie::setZombieName(std::string name) { this->_name = name;}

void Zombie::announce()
{
	std::string speech[8];
	speech[0] = "Braaaaiiiiiinnnnnnnssssss...";
	speech[1] = "Ssssssshhhhaaaaa...";
	speech[2] = "Aaaaaaaaaaaaaa...";
	speech[3] = "Mmmmmmmmph";
	speech[4] = "Im huuuunnngry";
	speech[5] = "Commmmmme hhheeeere";
	speech[6] = "Mmm. Taaasssssty brainssss...";
	speech[7] = "Hi. I'm just pretend as a zombie...";
	std::cout << "< " << this->_name << " (" << this->_type << ")> ";
	std::cout << speech[rand() % 8] << std::endl;
}