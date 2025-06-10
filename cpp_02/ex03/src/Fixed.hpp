/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 21:01:23 by nquecedo          #+#    #+#             */
/*   Updated: 2025/06/10 15:34:26 by nquecedo         ###   ########.fr       */
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
	~Fixed();

	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;

	Fixed &operator=(const Fixed &fixed);

	bool operator>(const Fixed &fixed) const;
	bool operator<(const Fixed &fixed) const;
	bool operator>=(const Fixed &fixed) const;
	bool operator<=(const Fixed &fixed) const;
	bool operator==(const Fixed &fixed) const;
	bool operator!=(const Fixed &fixed) const;

	Fixed operator+(const Fixed &fixed) const;
	Fixed operator-(const Fixed &fixed) const;
	Fixed operator*(const Fixed &fixed) const;
	Fixed operator/(const Fixed &fixed) const;

	Fixed operator++();
	Fixed operator++(int);
	Fixed operator--();
	Fixed operator--(int);

	static Fixed& min(Fixed &fx1, Fixed &fx2);
	static const Fixed& min(const Fixed &fx1, const Fixed &fx2);
	static Fixed& max(Fixed &fx1, Fixed &fx2);
	static const Fixed& max(const Fixed &fx1, const Fixed &fx2);
};

std::ostream &operator<<(std::ostream &os, const Fixed &t_Fixed);

#endif // FIXED_HPP