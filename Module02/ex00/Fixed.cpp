/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztawanna <ztawanna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 19:36:47 by ztawanna          #+#    #+#             */
/*   Updated: 2021/03/24 19:36:47 by ztawanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_fixedPointValue = 0;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_fixedPointValue = copy.getRawBits();
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &op)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &op)
	{
		this->_fixedPointValue = op.getRawBits();
	}
	return (*this);
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedPointValue);
}

void Fixed::setRawBits(const int i)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixedPointValue = i;
}