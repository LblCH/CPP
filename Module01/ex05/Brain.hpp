/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztawanna <ztawanna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 04:56:25 by ztawanna          #+#    #+#             */
/*   Updated: 2021/03/23 04:56:25 by ztawanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_BRAIN_HPP
#define CPP_BRAIN_HPP

#include <string>
#include <iostream>
#include <sstream>

class Brain
{
public:
	Brain();
	~Brain();

	void                setCapacity(unsigned long long capacity);
	unsigned long long  getCapacity();

	std::string         identify();

private:
	unsigned long long _capacity;
};

#endif //CPP_BRAIN_HPP
