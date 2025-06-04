/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 21:01:33 by nquecedo          #+#    #+#             */
/*   Updated: 2025/06/04 12:44:55 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->_number = 0;
	std::cout << "Default constructor has been called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
	this->_number = fixed.getRawBits();
	std::cout << "Copy constructor has been called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
	if (this != &fixed)
	{
		this->_number = fixed.getRawBits();
	}
	std::cout << "Copy asign operation has been called" << std::endl;
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
