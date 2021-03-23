/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztawanna <ztawanna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/21 21:58:10 by ztawanna          #+#    #+#             */
/*   Updated: 2021/03/21 21:58:10 by ztawanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Pony.hpp"

void create_stack_pony(void)
{
	std::cout << "Pony on the stack" << std::endl;
	Pony twilightSparkle = Pony("Twilight Sparkle", "violet", "god", "little", "fifteen");
	twilightSparkle.read_passport();
	twilightSparkle.change_owner("Devil");
	std::cout << "Pony was too old..." << std::endl;
}

void create_heap_pony(void)
{
	Pony *Applejack = new Pony("Applejack", "orange", "god", "not so little", "eight");
	Applejack->read_passport();
	Applejack->change_owner("Baal");
	std::cout << "Pony is gone mad." << std::endl;
	delete Applejack;
}

int	main(void)
{
	create_stack_pony();
	create_heap_pony();
}