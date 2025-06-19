/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 01:25:26 by nquecedo          #+#    #+#             */
/*   Updated: 2025/06/20 01:35:18 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongCat.class.hpp"

WrongCat::WrongCat()
{
	this->_type = "WrongCat";
	std::cout << "WrongCat constructor has been called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &wrongCat)
{
	this->_type = wrongCat._type;
	std::cout << "WrongCat copy constructor has been called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &wrongCat)
{
	if (this != &wrongCat)
	{
		this->_type = wrongCat._type;
	}
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructro has been called" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "MIIIIAAAUU (close to the food boul)" << std::endl;
}
