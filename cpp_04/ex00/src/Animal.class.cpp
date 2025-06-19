/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 22:08:04 by nquecedo          #+#    #+#             */
/*   Updated: 2025/06/20 00:04:12 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.class.hpp"

Animal::Animal() : _type("Default animal")
{

}

Animal::Animal(std::string type) : _type(type)
{

}

Animal::Animal(const Animal &animal) : _type(animal._type)
{

}

Animal &Animal::operator=(const Animal &animal)
{
	if (this != &animal)
	{
		this->_type = animal._type;
	}
	return (*this);
}

void Animal::makeSound() const
{
	std::cout << "Default sound" << std::endl;
}