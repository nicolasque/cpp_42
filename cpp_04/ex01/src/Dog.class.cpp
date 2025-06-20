/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 19:21:07 by nquecedo          #+#    #+#             */
/*   Updated: 2025/06/20 02:46:28 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Dog.class.hpp"

Dog::Dog()
{
	this->_type = "Dog";
	this->_brain = new Brain("FOOOOOOD");
	std::cout << "Dog constructor has been called" << std::endl;
}

Dog::Dog(const Dog &dog)
{
	this->_type = dog._type;
	this->_brain = dog._brain;
	std::cout << "Dog copy constructor has been called" << std::endl;
}

Dog &Dog::operator=(const Dog &dog)
{
	if (this != &dog)
	{
		this->_type = dog._type;
		this->_brain = dog._brain;
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructro has been called" << std::endl;
	delete (_brain);
}

void Dog::makeSound() const
{
	std::cout << "GAU GUAU GUAU (3 in the mornyng)" << std::endl;
}
