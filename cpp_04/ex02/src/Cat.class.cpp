/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 19:21:12 by nquecedo          #+#    #+#             */
/*   Updated: 2025/06/20 03:12:02 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Cat.class.hpp"

Cat::Cat()
{
	this->_type = "Cat";
	this->_brain = new Brain("Scrach sofa");
	std::cout << "Cat constructor has been called" << std::endl;
}

Cat::Cat(std::string idea)
{
	this->_type = "Cat";
	this->_brain = new Brain(idea);
	std::cout << "Cat with idea constructor has been called" << std::endl;
}

Cat::Cat(const Cat &cat)
{
	Animal::operator=(cat);
	std::cout << "Cat copy constructor has been called" << std::endl;
}

Cat &Cat::operator=(const Cat &cat)
{
	if (this != &cat)
	{
		Animal::operator=(cat);
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "CAT destructro has been called" << std::endl;
	delete(this->_brain);
}

void Cat::makeSound() const
{
	std::cout << "MIIIIAAAUU (close to the food boul)" << std::endl;
}
