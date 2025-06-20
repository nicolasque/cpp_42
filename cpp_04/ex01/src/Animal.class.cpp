/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 22:08:04 by nquecedo          #+#    #+#             */
/*   Updated: 2025/06/20 02:13:33 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Animal.class.hpp"

Animal::Animal() : _type("Default animal")
{
	std::cout << "Default ANIMAL constructor has benn called." << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
	std::cout << "ANIMAL with type constructor has benn called." << std::endl;
}

Animal::Animal(const Animal &animal) : _type(animal._type)
{
	std::cout << "ANIMAL copy constructor." << std::endl;
}

Animal::~Animal()
{
	std::cout << "ANIMAL destructor" << std::endl;
}

Animal &Animal::operator=(const Animal &animal)
{
	if (this != &animal)
	{
		this->_type = animal._type;
	}
	return (*this);
}

std::string Animal::getType() const
{
	return (this->_type);
}

void Animal::makeSound() const
{
	std::cout << "Default sound" << std::endl;
}
