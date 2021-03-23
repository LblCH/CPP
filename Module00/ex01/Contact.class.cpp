/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztawanna <ztawanna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 11:36:43 by ztawanna          #+#    #+#             */
/*   Updated: 2021/03/21 11:36:43 by ztawanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact(void) { return ; }

Contact::~Contact(void) { return ; }

void	Contact::set_first_name(std::string str)
{
	this->_first_name = str;
	return ;
}

void 	Contact::set_last_name(std::string str)
{
	this->_last_name = str;
	return ;
}

void 	Contact::set_nickname(std::string str)
{
	this->_nickname = str;
	return ;
}

void 	Contact::set_login(std::string str)
{
	this->_login = str;
	return ;
}

void 	Contact::set_post_adress(std::string str)
{
	this->_post_adress = str;
	return ;
}

void 	Contact::set_email(std::string str)
{
	this->_email = str;
	return ;
}

void 	Contact::set_phone_nbr(std::string str)
{
	this->_phone_nbr = str;
	return ;
}

void 	Contact::set_birthday(std::string str)
{
	this->_birthday = str;
	return ;
}

void 	Contact::set_fav_meal(std::string str)
{
	this->_fav_meal = str;
	return ;
}

void 	Contact::set_underwear_color(std::string str)
{
	this->_underwear_color = str;
	return ;
}

void 	Contact::set_darkest_secret(std::string str)
{
	this->_darkest_secret = str;
	return ;
}

std::string		Contact::get_first_name(void)
{
	return (this->_first_name);
}

std::string		Contact::get_last_name(void)
{
	return (this->_last_name);
}

std::string		Contact::get_nickname(void)
{
	return (this->_nickname);
}

std::string		Contact::get_login(void)
{
	return (this->_login);
}

std::string		Contact::get_post_adress(void)
{
	return (this->_post_adress);
}

std::string		Contact::get_email(void)
{
	return (this->_email);
}

std::string		Contact::get_phone_nbr(void)
{
	return (this->_phone_nbr);
}

std::string		Contact::get_birthday(void)
{
	return (this->_birthday);
}

std::string		Contact::get_fav_meal(void)
{
	return (this->_fav_meal);
}

std::string		Contact::get_underwear_color(void)
{
	return (this->_underwear_color);
}

std::string		Contact::get_darkest_secret(void)
{
	return (this->_darkest_secret);
}

