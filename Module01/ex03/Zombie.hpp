/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztawanna <ztawanna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 21:52:40 by ztawanna          #+#    #+#             */
/*   Updated: 2021/03/22 21:52:40 by ztawanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{
public:
	Zombie();
	Zombie(std::string name, std::string type);
	~Zombie();
	void 	setZombieName(std::string name);
	void 	announce();
private:
	std::string		_name;
	std::string 	_type;
};

#endif