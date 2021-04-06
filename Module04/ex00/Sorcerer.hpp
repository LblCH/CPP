/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztawanna <ztawanna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 05:09:18 by ztawanna          #+#    #+#             */
/*   Updated: 2021/03/30 05:09:18 by ztawanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_SORCERER_HPP
#define CPP_SORCERER_HPP

#include <iostream>
#include "Victim.hpp"
#include "Peon.hpp"

class Sorcerer
{
public:
	Sorcerer(std::string name, std::string title);
	virtual ~Sorcerer();
	Sorcerer(const Sorcerer &);
	Sorcerer &operator=(const Sorcerer &copy);
	std::string getName() const;
	std::string getTitle() const;
	void polymorph(const Victim &) const;

private:
	std::string _name;
	std::string _title;
	Sorcerer();
};

std::ostream & operator<<(std::ostream &out, const Sorcerer &rhs);

#endif //CPP_SORCERER_HPP
