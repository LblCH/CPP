/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztawanna <ztawanna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/28 14:16:14 by ztawanna          #+#    #+#             */
/*   Updated: 2021/03/28 14:16:14 by ztawanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main()
{
	ClapTrap Clap("Claptrap");
	FragTrap Flap("Fraggy");

	srand(time(NULL));
	std::cout << std::endl;
	Clap.meleeAttack("Fraggy");
	Flap.takeDamage(30);
	Flap.rangedAttack("Claptrap");
	Clap.takeDamage(20);
	Flap.vaulthunter_dot_exe("Claptrap");
	Clap.takeDamage(35);
	Flap.vaulthunter_dot_exe("Claptrap");
	Clap.takeDamage(35);
	Clap.beRepaired(40);
	Clap.rangedAttack("Fraggy");
	Flap.takeDamage(20);

	std::cout << std::endl;
	ScavTrap Scav("Gatekeeper");
	Scav.challengeNewcomer("Player One");
	Scav.meleeAttack("Flap");
	Flap.takeDamage(20);
	Scav.rangedAttack("Fraggy");
	Flap.takeDamage(15);
	Scav.rangedAttack("Fraggy");
	Flap.takeDamage(15);
	Scav.challengeNewcomer("Player Two");
	Flap.rangedAttack("Gatekeeper");
	Scav.takeDamage(20);
	Scav.beRepaired(30);
	Scav.challengeNewcomer("Player Three");

	std::cout << std::endl;
	NinjaTrap iNAC("iNAC");
	iNAC.ninjaShoebox(Flap);
	iNAC.ninjaShoebox(Clap);
	iNAC.ninjaShoebox(Scav);
	iNAC.ninjaShoebox(iNAC);
	iNAC.beRepaired(20);
	iNAC.meleeAttack("Fraggy");
	Flap.takeDamage(60);

	std::cout << std::endl;
}

