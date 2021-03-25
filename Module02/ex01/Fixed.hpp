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
#include <cmath>

class Fixed
{
public:
	Fixed();
	Fixed(const int);
	Fixed(const float);
	~Fixed();
	Fixed(const Fixed &copy);
	Fixed&              operator=(const Fixed &op);
	int                 getRawBits() const;
	void                setRawBits(int const);
	int					toInt() const;
	float				toFloat() const;

private:
	int                 _fixedPointValue;
	static const int    _Bits = 8;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);
#endif //CPP_FIXED_HPP
