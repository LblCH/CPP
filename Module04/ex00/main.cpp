/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztawanna <ztawanna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 05:08:57 by ztawanna          #+#    #+#             */
/*   Updated: 2021/03/30 05:08:57 by ztawanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

int main ()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);

	std::cout << std::endl;

	Sorcerer marlin("Merlin", "the Mage");
	Victim john("John");
	Peon rick(joe);
	std::cout << marlin << john << rick;
	jim.getPolymorphed();
	joe.getPolymorphed();

	std::cout << std::endl;

	return 0;
}
