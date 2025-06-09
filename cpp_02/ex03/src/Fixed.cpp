/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 21:01:33 by nquecedo          #+#    #+#             */
/*   Updated: 2025/06/09 23:53:53 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->_number = 0;
}

Fixed::Fixed(const int input)
{
	if (input >= MAX_FLO)
	{
		this->_number = 0;
		return;
	}
	this->_number = round(input * pow(2, this->_fraction));
}

Fixed::Fixed(const float input)
{
	if (input >= MAX_FLO)
	{
		this->_number = 0;
		return;
	}
	this->_number = round(input * (1 << this->_fraction));
}

Fixed::Fixed(const Fixed &fixed)
{
	this->_number = fixed.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
	if (this != &fixed)
		this->_number = fixed.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
}

int Fixed::getRawBits() const
{
	return (this->_number);
}

void Fixed::setRawBits(int const raw)
{
	this->_number = raw;
}

float Fixed::toFloat() const
{
	return ((float)this->_number * (pow(2, -this->_fraction)));
}

int Fixed::toInt() const
{
	return (round(this->_number * (pow(2, -this->_fraction))));
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
	os << fixed.toFloat();
	return (os);
}

bool Fixed::operator>(const Fixed &fixed) const
{
	return (this->_number > fixed._number);
}

bool Fixed::operator<(const Fixed &fixed) const
{
	return (this->_number < fixed._number);
}

bool Fixed::operator>=(const Fixed &fixed) const
{
	return (this->_number >= fixed._number);
}

bool Fixed::operator<=(const Fixed &fixed) const
{
	return (this->_number <= fixed._number);
}

bool Fixed::operator==(const Fixed &fixed) const
{
	return (this->_number == fixed._number);
}

bool Fixed::operator!=(const Fixed &fixed) const
{
	return (this->_number != fixed._number);
}

Fixed Fixed::operator+(const Fixed &fixed) const
{
	Fixed output(this->_number + fixed._number);
	return (output);
}

Fixed Fixed::operator-(const Fixed &fixed) const
{
	Fixed output(this->_number - fixed._number);
	return (output);
}

Fixed Fixed::operator*(const Fixed &fixed) const
{
	Fixed output;
	output._number = (this->_number * fixed._number) >> _fraction;
	return (output);
}

Fixed Fixed::operator/(const Fixed &fixed) const
{
	Fixed output;
	output._number = (this->_number * fixed._number) >> _fraction;
	return (output);
}

Fixed Fixed::operator++()
{
	this->_number += 1;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	this->_number += 1;
	return (temp);
}

Fixed Fixed::operator--()
{
	this->_number -= 1;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed temp(*this);
	this->_number -= 1;
	return (temp);
}


Fixed &Fixed::min(Fixed &fx1, Fixed &fx2)
{
	if (fx1._number < fx2._number)
		return (fx1);
	return (fx2);
}

const Fixed &Fixed::min(const Fixed &fx1, const Fixed &fx2)
{
	if (fx1._number < fx2._number)
		return (fx1);
	return (fx2);
}

Fixed &Fixed::max(Fixed &fx1, Fixed &fx2)
{
	if (fx1._number > fx2._number)
		return (fx1);
	return (fx2);
}

const Fixed &Fixed::max(const Fixed &fx1, const Fixed &fx2)
{
	if (fx1._number > fx2._number)
		return (fx1);
	return (fx2);
}
