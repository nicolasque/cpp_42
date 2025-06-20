/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 19:21:07 by nquecedo          #+#    #+#             */
/*   Updated: 2025/06/20 03:12:44 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Dog.class.hpp"

Dog::Dog()
{
	this->_type = "Dog";
	this->_brain = new Brain("FOOOOOOD");
	std::cout << "Dog constructor has been called" << std::endl;
}

Dog::Dog(std::string idea)
{
	this->_type = "Dog";
	this->_brain = new Brain(idea);
	std::cout << "Dog with idea contructor" << std::endl;
}

Dog::Dog(const Dog &dog)
{
	Animal::operator=(dog);
	std::cout << "Dog copy constructor has been called" << std::endl;
}

Dog &Dog::operator=(const Dog &dog)
{
	if (this != &dog)
	{
		Animal::operator=(dog);
	}
	return (*this);
}

Dog::~Dog()
{
	delete (this->_brain);
	std::cout << "Dog destructro has been called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "GAU GUAU GUAU (3 in the mornyng)" << std::endl;
}
