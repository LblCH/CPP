/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztawanna <ztawanna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 17:49:46 by ztawanna          #+#    #+#             */
/*   Updated: 2021/03/29 17:49:46 by ztawanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_SUPERTRAP_HPP
#define CPP_SUPERTRAP_HPP

#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
public:
	SuperTrap();
	SuperTrap(std::string name);
	SuperTrap(const SuperTrap&);
	~SuperTrap();
	SuperTrap &operator=(const SuperTrap& copy);
};

#endif //CPP_SUPERTRAP_HPP
