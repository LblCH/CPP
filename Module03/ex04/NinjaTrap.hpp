/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztawanna <ztawanna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 16:27:39 by ztawanna          #+#    #+#             */
/*   Updated: 2021/03/29 16:27:39 by ztawanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_NINJATRAP_HPP
#define CPP_NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
public:
	NinjaTrap();
	NinjaTrap(std::string const &name);
	NinjaTrap(const NinjaTrap&);
	~NinjaTrap();
	NinjaTrap &operator=(const NinjaTrap& copy);
	void		ninjaShoebox(NinjaTrap &);
	void		ninjaShoebox(ClapTrap &);
	void		ninjaShoebox(FragTrap &);
	void		ninjaShoebox(ScavTrap &);
};

#endif //CPP_NINJATRAP_HPP
