/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztawanna <ztawanna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 10:54:31 by ztawanna          #+#    #+#             */
/*   Updated: 2021/03/21 10:54:31 by ztawanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP

# include <string>
# include <iostream>
# include <iomanip>

class	Contact
{
public:
	Contact(void);
	~Contact(void);
	void	set_first_name(std::string);
	void	set_last_name(std::string);
	void	set_nickname(std::string);
	void	set_login(std::string);
	void	set_post_adress(std::string);
	void	set_email(std::string);
	void	set_phone_nbr(std::string);
	void	set_birthday(std::string);
	void	set_fav_meal(std::string);
	void	set_underwear_color(std::string);
	void	set_darkest_secret(std::string);
	std::string		get_first_name(void);
	std::string		get_last_name(void);
	std::string		get_nickname(void);
	std::string		get_login(void);
	std::string		get_post_adress(void);
	std::string		get_email(void);
	std::string		get_phone_nbr(void);
	std::string		get_birthday(void);
	std::string		get_fav_meal(void);
	std::string		get_underwear_color(void);
	std::string		get_darkest_secret(void);
private:
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _login;
	std::string _post_adress;
	std::string _email;
	std::string _phone_nbr;
	std::string _birthday;
	std::string _fav_meal;
	std::string _underwear_color;
	std::string _darkest_secret;
};

#endif //CPP_PHONEBOOK_HPP
