/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 19:20:59 by nquecedo          #+#    #+#             */
/*   Updated: 2025/06/20 17:57:26 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Animal.class.hpp"
#include "includes/Cat.class.hpp"
#include "includes/Dog.class.hpp"
#include "includes/WrongAnimal.class.hpp"

#define ANIMAL_COUNT 10

int main()
{
	{
		const Animal *meta = new Animal();
		const Animal *j = new Dog();
		const Animal *i = new Cat();
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		std::cout << meta->getType() << " " << std::endl;
		i->makeSound(); // will output the cat sound!
		j->makeSound();
		meta->makeSound();
		delete (meta);
		delete (i);
		delete (j);
	}
	{
		// const WrongAnimal *wrongMeta = new WrongAnimal();
		// std::cout << wrongMeta->getType() << std::endl;
		// wrongMeta->makeSound();
		// delete (wrongMeta);
	}
	return (0);
}
