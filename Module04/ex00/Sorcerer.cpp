/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztawanna <ztawanna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 05:09:13 by ztawanna          #+#    #+#             */
/*   Updated: 2021/03/30 05:09:13 by ztawanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer()
{}

Sorcerer::Sorcerer(std::string name, std::string title):
	_name(name), _title(title)
{
	std::cout << this->_name + ", " + this->_title +
	", is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << this->_name + ", " + this->_title +
	", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &copy)
:
	_name(copy._name),
	_title(copy._title)
{}

Sorcerer & Sorcerer::operator=(const Sorcerer &copy)
{
	if (this == &copy)
		return (*this);
	this->_name = copy.getName();
	this->_title = copy.getTitle();
	return (*this);
}

std::string Sorcerer::getName() const { return this->_name;}

std::string Sorcerer::getTitle() const { return this->_title;}

void	Sorcerer::polymorph(Victim const & src) const
{
	src.getPolymorphed();
}

std::ostream   &operator<<(std::ostream & o, const Sorcerer & sorcerer)
{
	o << "I am " << sorcerer.getName() << ", " << sorcerer.getTitle() +
	", and i like ponies" << std::endl;
	return (o);
}