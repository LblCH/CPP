/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztawanna <ztawanna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 05:32:23 by ztawanna          #+#    #+#             */
/*   Updated: 2021/03/23 05:32:23 by ztawanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_WEAPON_HPP
#define CPP_WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
public:
	Weapon();
	Weapon(std::string);
	~Weapon();
	std::string		getType();
	void 			setType(std::string);

private:
	std::string _type;
};

#endif //CPP_WEAPON_HPP
