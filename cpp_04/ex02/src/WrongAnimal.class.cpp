/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.class.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 17:52:48 by nquecedo          #+#    #+#             */
/*   Updated: 2025/06/20 17:54:17 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "includes/WrongAnimal.class.hpp"

WrongAnimal::WrongAnimal() : _type("Default WrongAnimal")
{
	std::cout << "Default WrongAnimal constructor has benn called." << std::endl;
	this->_brain = NULL;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
	std::cout << "WrongAnimal with type constructor has benn called." << std::endl;
	this->_brain = NULL;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wrongAnimal) : _type(wrongAnimal._type)
{
	std::cout << "WrongAnimal copy constructor." << std::endl;
	this->_brain = NULL;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &wrongAnimal)
{
	if (this != &wrongAnimal)
	{
		this->_type = wrongAnimal._type;
		if (this->_brain)
		{
			delete(this->_brain);
			this->_brain = new Brain(*(wrongAnimal._brain));
		}
	}
	return (*this);
}

std::string WrongAnimal::getType() const
{
	return (this->_type);
}

void WrongAnimal::makeSound() const
{
	std::cout << "Default sound" << std::endl;
}
