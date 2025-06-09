/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 21:01:33 by nquecedo          #+#    #+#             */
/*   Updated: 2025/06/10 00:13:04 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor has been called" << std::endl;
	this->_number = 0;
}

Fixed::Fixed(const int input)
{
	std::cout << "Int constructor called" << std::endl;
	if (input >= MAX_FLO)
	{
		std::cout << "Input is out of range, fixedPointValue set to 0" << std::endl;
		this->_number = 0;
		return;
	}
	this->_number = input << this->_fraction;
}

Fixed::Fixed(const float input)
{
	std::cout << "Float constructor called" << std::endl;
	if (input >= MAX_FLO)
	{
		std::cout << "Input is out of range, fixedPointValue set to 0" << std::endl;
		this->_number = 0;
		return;
	}
	this->_number = round(input * (1 << this->_fraction));
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor has been called" << std::endl;
	this->_number = fixed.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Copy asign operation has been called" << std::endl;
	if (this != &fixed)
		this->_number = fixed.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Fixed destructor has been called" << std::endl;
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
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

int Fixed::toInt() const {
    return (this->_number >> _fraction);
}

std::ostream &operator<<(std::ostream& os, const Fixed &fixed)
{
	os << fixed.toFloat();
	return (os);
}