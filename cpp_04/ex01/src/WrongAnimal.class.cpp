/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.class.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 00:37:42 by nquecedo          #+#    #+#             */
/*   Updated: 2025/06/20 00:38:51 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "WrongAnimal.class.hpp"

WrongAnimal::WrongAnimal() : _type("Default WrongAnimal")
{
	std::cout << "Default WrongAnimal constructor has benn called." << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
	std::cout << "WrongAnimal with type constructor has benn called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wrongAnimal) : _type(wrongAnimal._type)
{
	std::cout << "WrongAnimal copy constructor." << std::endl;
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
