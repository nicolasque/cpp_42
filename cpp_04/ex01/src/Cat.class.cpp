/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 19:21:12 by nquecedo          #+#    #+#             */
/*   Updated: 2025/06/20 00:27:43 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.class.hpp"

Cat::Cat()
{
	this->_type = "Cat";
	std::cout << "Cat constructor has been called" << std::endl;
}

Cat::Cat(const Cat &cat)
{
	this->_type = cat._type;
	std::cout << "Cat copy constructor has been called" << std::endl;
}

Cat &Cat::operator=(const Cat &cat)
{
	if (this != &cat)
	{
		this->_type = cat._type;
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "CAT destructro has been called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "MIIIIAAAUU (close to the food boul)" << std::endl;
}
