/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztawanna <ztawanna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 21:52:42 by ztawanna          #+#    #+#             */
/*   Updated: 2021/03/22 21:52:42 by ztawanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HORDE_HPP
#define ZOMBIE_HORDE_HPP

# include <string>
# include <iostream>
# include "Zombie.hpp"

class ZombieHorde
{
public:
	ZombieHorde();
	ZombieHorde(int n);
	~ZombieHorde();
	void    announce();
private:
	void 			setZombieType(std::string type);
	std::string     randomName(void);
	std::string 	_type;
	int 			_size;
	Zombie		 	*_zombies;
};

#endif