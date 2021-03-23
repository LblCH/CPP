/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztawanna <ztawanna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 04:58:12 by ztawanna          #+#    #+#             */
/*   Updated: 2021/03/23 04:58:12 by ztawanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_HUMAN_HPP
#define CPP_HUMAN_HPP

#include "Brain.hpp"

class Human
{
public:
	Human();
	~Human();
	std::string identify();
	Brain		&getBrain();
private:
	Brain *_brain;
};


#endif //CPP_HUMAN_HPP
