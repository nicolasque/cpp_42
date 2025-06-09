/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 21:01:23 by nquecedo          #+#    #+#             */
/*   Updated: 2025/06/10 00:11:26 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <string>
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <cctype>
#include <sstream>
#include <cstdio>
#include <cstdlib>
#include <cmath>

#define FRACTIONAL_BITS 8
#define MAX_FLO std::pow(2, (32 - FRACTIONAL_BITS)) - 1

class Fixed
{
private:
	int _number;
	static const int _fraction = FRACTIONAL_BITS;

public:
	Fixed();
	Fixed(const int number);
	Fixed(const float number);
	Fixed(const Fixed &fixed);
	Fixed &operator=(const Fixed &fixed);
	~Fixed();
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& t_Fixed);

#endif // FIXED_HPP