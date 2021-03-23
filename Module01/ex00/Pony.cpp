/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztawanna <ztawanna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 20:35:22 by ztawanna          #+#    #+#             */
/*   Updated: 2021/03/21 20:35:22 by ztawanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

/*
** Default constructor of "Pony" class
*/

Pony::Pony()
{}

/*
** Initialisation constructor of "Pony" class
*/

Pony::Pony(std::string name, std::string color, std::string owner,
		   std::string height, std::string age):
	_name(name),
	_color(color),
	_owner(owner),
	_height(height),
	_age(age)
{}

/*
** Destructor of "Pony" class
*/

Pony::~Pony()
{
	std::cout << "😈 At last we killing a pony... Progress!" << std::endl;
}


/*
** "Pony" class setters
*/

void	Pony::set_name(std::string name)	{this->_name = name;}
void	Pony::set_color(std::string color)	{this->_color = color;}
void	Pony::set_owner(std::string owner)	{this->_owner = owner;}
void	Pony::set_height(std::string height) {this->_height = height;}
void	Pony::set_age(std::string age)		{this->_age = age;}

/*
** "Pony" class getters
*/

std::string		Pony::get_name()	{return(this->_name);}
std::string		Pony::get_color()	{return(this->_color);}
std::string		Pony::get_owner()	{return(this->_owner);}
std::string		Pony::get_height()	{return(this->_height );}
std::string		Pony::get_age()		{return(this->_age);}

/*
** "Pony" class some staff
*/

void	Pony::read_passport()
{
	std::cout << "Pony's name  : " + this->_name << std::endl;
	std::cout << "Pony's color : " + this->_color << std::endl;
	std::cout << "Pony's owner : " + this->_owner << std::endl;
	std::cout << "Pony's height: " + this->_height << std::endl;
	std::cout << "Pony's age   : " + this->_age << std::endl;
}

void 	Pony::change_owner(std::string new_owner)
{
	std::cout << new_owner << " wants to buy " << this->_name << std::endl;
	set_owner(new_owner);
	std::cout << "New owner now is " << new_owner << std::endl;
}
