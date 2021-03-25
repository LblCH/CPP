/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztawanna <ztawanna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 19:36:28 by ztawanna          #+#    #+#             */
/*   Updated: 2021/03/24 19:36:28 by ztawanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &copy);
	Fixed&              operator=(const Fixed &op);
	int                 getRawBits() const;
	void                setRawBits(int const);

private:
	int                 _fixedPointValue;
	static const int    _Bits;
};
#endif //CPP_FIXED_HPP
