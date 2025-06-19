/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 19:20:59 by nquecedo          #+#    #+#             */
/*   Updated: 2025/06/20 01:39:19 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.class.hpp"
#include "Cat.class.hpp"
#include "Dog.class.hpp"
#include "WrongAnimal.class.hpp"
#include "WrongCat.class.hpp"

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
		const WrongAnimal *wrongMeta = new WrongAnimal();
		const WrongAnimal *worngi = new WrongCat();
		std::cout << wrongMeta->getType() << std::endl;
		std::cout << worngi->getType() << std::endl;
		wrongMeta->makeSound();
		worngi->makeSound();
		delete (wrongMeta);
		delete (worngi);
	}
	return 0;
}