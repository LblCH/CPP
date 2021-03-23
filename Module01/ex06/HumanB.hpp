/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztawanna <ztawanna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 05:30:12 by ztawanna          #+#    #+#             */
/*   Updated: 2021/03/23 05:30:12 by ztawanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_HUMANB_HPP
#define CPP_HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
public:
	HumanB();
	HumanB(std::string);
	~HumanB();
	void 		attack();
	void 		setWeapon(Weapon&);
private:
	std::string	_name;
	Weapon		*_weapon;
};

#endif //CPP_HUMANB_HPP
