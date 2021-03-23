/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztawanna <ztawanna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 12:14:00 by ztawanna          #+#    #+#             */
/*   Updated: 2021/03/21 12:14:00 by ztawanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

static void	invintation(void)
{
	std::cout << "💩 Crappy PhoneBook 💩" << std::endl;
	std::cout << "Available commands" << std::endl;
	std::cout << "ADD" << std::endl << "SEARCH" << std::endl;
	std::cout << "EXIT" << std::endl;
//	std::cout << "Enter new command:";
}

Contact	add_contact(void)
{
	Contact new_contact;
	std::string str;

	std::cout << "Input First name: ";
	std::getline(std::cin, str);
	new_contact.set_first_name(str);
	std::cout << "Input Last name: ";
	std::getline(std::cin, str);
	new_contact.set_last_name(str);
	std::cout << "Input Nickname: ";
	std::getline(std::cin, str);
	new_contact.set_nickname(str);
	std::cout << "Input Login: ";
	std::getline(std::cin, str);
	new_contact.set_login(str);
	std::cout << "Input post adress: ";
	std::getline(std::cin, str);
	new_contact.set_post_adress(str);
	std::cout << "Input e-mail: ";
	std::getline(std::cin, str);
	new_contact.set_email(str);
	std::cout << "Input phone number: ";
	std::getline(std::cin, str);
	new_contact.set_phone_nbr(str);
	std::cout << "Input birthday: ";
	std::getline(std::cin, str);
	new_contact.set_birthday(str);
	std::cout << "Input favourite meal: ";
	std::getline(std::cin, str);
	new_contact.set_fav_meal(str);
	std::cout << "Input underwear color: ";
	std::getline(std::cin, str);
	new_contact.set_underwear_color(str);
	std::cout << "Input darkest secret: ";
	std::getline(std::cin, str);
	new_contact.set_darkest_secret(str);
	std::cout << "New contact added." << std::endl;
	return (new_contact);
}

std::string		correct_length(std::string str)
{
	str.erase(str.begin() + 9, str.end());
	str.append(".");
	return (str);
}

void	show_contact(Contact phonebook[], int quantity)
{
	int i;
	std::string str;

	std::cout << "Enter index of contact:";
	std::getline(std::cin, str);
	i = std::atoi(str.c_str());
	i--;
	if(std::cin.good() && i >= 0 && i < quantity)
	{
		std::cout << "First name     : " << phonebook[i].get_first_name() << std::endl;
		std::cout << "Last name      : " << phonebook[i].get_last_name() << std::endl;
		std::cout << "Nickname       : " << phonebook[i].get_nickname() << std::endl;
		std::cout << "Login          : " << phonebook[i].get_login() << std::endl;
		std::cout << "Post adress    : " << phonebook[i].get_post_adress() << std::endl;
		std::cout << "E-mail         : " << phonebook[i].get_email() << std::endl;
		std::cout << "Phone number   : " << phonebook[i].get_phone_nbr() << std::endl;
		std::cout << "Birthday       : " << phonebook[i].get_birthday() << std::endl;
		std::cout << "Favourite meal : " << phonebook[i].get_fav_meal() << std::endl;
		std::cout << "Underwear color: " << phonebook[i].get_underwear_color() << std::endl;
		std::cout << "Darkest secret : " << phonebook[i].get_darkest_secret() << std::endl;
	}
	else
	{
		std::cin.clear();
		std::cout << "Index incorrect." << std::endl;
	}
}

void 	do_search(Contact phonebook[], int quantity)
{
	std::string first_name;
	std::string last_name;
	std::string nickname;

	std::cout << std::setw(10);
	std::cout << "|Index     |First Name|Last Name |Nickname  |" << std::endl;
	for (int i = 0; i < quantity; i++)
	{
		first_name = phonebook[i].get_first_name();
		last_name = phonebook[i].get_last_name();
		nickname = phonebook[i].get_nickname();

		std::cout << "|" << std::setw(10) << i + 1;
		std::cout << "|" << std::setw(10) << ((first_name.length() > 10) ? \
			correct_length(first_name) : first_name);
		std::cout << "|" << std::setw(10) << ((last_name.length() > 10) ? \
			correct_length(last_name) :last_name);
		std::cout << "|" << std::setw(10) << ((nickname.length() > 10) ? \
			correct_length(nickname) : nickname);
		std::cout << "|" << std::endl;
	}
	show_contact(phonebook, quantity);
}

int		main(void)
{
	std::string	command;
	Contact 	phonebook[8];
	int			i;

	i = 0;
	invintation();
	while (1)
	{
		std::cout << "Enter new command:";
		command.clear();
		std::getline(std::cin, command, '\n');
		if (command == "ADD")
			if (i < 8)
				phonebook[i++] = add_contact();
			else
				std::cout << "PhoneBook is full. Cant add new contact." << std::endl;
		else if (command == "SEARCH")
			if (i > 0)
				do_search(phonebook, i);
			else
				std::cout << "PhoneBook is empty. Cant add new search." << std::endl;
		else if (command == "EXIT")
			break;
	}
	std::cout << "PhoneBook is exiting..." << std::endl;
	return (0);
}