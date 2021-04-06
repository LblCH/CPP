/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztawanna <ztawanna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 04:51:05 by ztawanna          #+#    #+#             */
/*   Updated: 2021/03/31 04:51:05 by ztawanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Character.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"

int main()
{
	Character* me = new Character("me");
	std::cout << *me;
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	std::cout << std::endl;
	SuperMutant* biba = new SuperMutant();
	for (int i=0;i<5;i++)
	{
		std::cout << *me;
		me->attack(biba);
	}
	std::cout << std::endl;
	me->recoverAP();
	me->recoverAP();
	for (int i=0;i<5;i++)
	{
		std::cout << *me;
		me->attack(biba);
	}
	SuperMutant* boba = new SuperMutant();
	me->recoverAP();
	me->attack(biba);
	delete boba;
	return 0;
}