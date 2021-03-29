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

int main()
{
	FragTrap Clap("Claptrap");
	FragTrap Flap("iNAC");

	srand(time(NULL));
	std::cout << std::endl;
	Clap.meleeAttack("iNac");
	Flap.takeDamage(30);
	Clap.vaulthunter_dot_exe("iNac");
	Flap.takeDamage(35);
	Flap.rangedAttack("Claptrap");
	Clap.takeDamage(20);
	Flap.vaulthunter_dot_exe("Claptrap");
	Clap.takeDamage(35);
	Flap.vaulthunter_dot_exe("Claptrap");
	Clap.takeDamage(35);
	Clap.beRepaired(40);
	Clap.rangedAttack("iNac");
	Flap.takeDamage(20);
	std::cout << std::endl;
	ScavTrap Scav("Gatekeeper");
	Scav.challengeNewcomer("Player One");
	Scav.meleeAttack("Flap");
	Flap.takeDamage(20);
	Scav.rangedAttack("iNac");
	Flap.takeDamage(15);
	Scav.rangedAttack("iNac");
	Flap.takeDamage(15);
	Flap.rangedAttack("Gatekeeper");
	Scav.takeDamage(20);
	Scav.beRepaired(30);

	std::cout << std::endl;
}

