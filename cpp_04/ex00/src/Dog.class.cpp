/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 19:21:07 by nquecedo          #+#    #+#             */
/*   Updated: 2025/06/20 00:30:44 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.class.hpp"

Dog::Dog()
{
	this->_type = "Dog";
	std::cout << "Dog constructor has been called" << std::endl;
}

Dog::Dog(const Dog &dog)
{
	this->_type = dog._type;
	std::cout << "Dog copy constructor has been called" << std::endl;
}

Dog &Dog::operator=(const Dog &dog)
{
	if (this != &dog)
	{
		this->_type = dog._type;
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructro has been called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "GAU GUAU GUAU (3 in the mornyng)" << std::endl;
}
