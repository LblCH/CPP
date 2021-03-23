/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztawanna <ztawanna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 20:14:30 by ztawanna          #+#    #+#             */
/*   Updated: 2021/03/21 20:14:30 by ztawanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_PONY_HPP
#define CPP_PONY_HPP

# include <string>
# include <iostream>

class Pony
{
public:
	Pony();
	Pony(std::string name, std::string color, std::string owner,
		 std::string height, std::string age);
	~Pony();
	void	set_name(std::string name);
	void	set_color(std::string color);
	void	set_owner(std::string owner);
	void	set_height(std::string height);
	void	set_age(std::string age);
	void 	read_passport();
	void	change_owner(std::string new_owner);
	std::string		get_name();
	std::string		get_color();
	std::string		get_owner();
	std::string		get_height();
	std::string		get_age();

	void setOwner(const std::string &owner);

private:
	std::string		_name;
	std::string		_color;
	std::string		_owner;
	std::string		_height;
	std::string		_age;
};
#endif //CPP_PONY_HPP
