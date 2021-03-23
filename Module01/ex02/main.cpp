/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztawanna <ztawanna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 01:08:58 by ztawanna          #+#    #+#             */
/*   Updated: 2021/03/23 01:08:58 by ztawanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ZombieEvent.hpp"

int main(void)
{
	ZombieEvent	zombieEvent;
	Zombie	*zombie;

	zombie = new Zombie("Mac", "fast");
	zombie->announce();
	delete zombie;

	zombie = zombieEvent.newZombie("PC");
	zombie->announce();
	delete zombie;

	zombieEvent.setZombieType("burning");
	zombie = zombieEvent.newZombie("AMD");
	zombie->announce();
	delete zombie;

	zombieEvent.setZombieType("Chump");
	for (int i =0; i<5; i++)
	{
		zombie = zombieEvent.randomChump();
		zombie->announce();
		delete zombie;
	}
	return (0);
}