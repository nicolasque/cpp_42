/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 19:20:59 by nquecedo          #+#    #+#             */
/*   Updated: 2025/06/20 16:16:31 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Animal.class.hpp"
#include "includes/Cat.class.hpp"
#include "includes/Dog.class.hpp"

#define ANIMAL_COUNT 10

int main()
{
	std::cout << "=== CREATING ARRAY OF ANIMALS ===" << std::endl;
	Animal *animals[ANIMAL_COUNT];

	for (int i = 0; i < ANIMAL_COUNT / 2; i++)
	{
		std::cout << "\n--- Creating Dog " << i + 1 << " ---" << std::endl;
		animals[i] = new Dog();
	}

	for (int i = ANIMAL_COUNT / 2; i < ANIMAL_COUNT; i++)
	{
		std::cout << "\n--- Creating Cat " << i + 1 << " ---" << std::endl;
		animals[i] = new Cat();
	}

	std::cout << "\n=== TESTING POLYMORPHISM ===" << std::endl;
	for (int i = 0; i < ANIMAL_COUNT; i++)
	{
		std::cout << "Animal " << i + 1 << " (" << animals[i]->getType() << ") says: ";
		animals[i]->makeSound();
	}

	std::cout << "\n=== TESTING DEEP COPY ===" << std::endl;
	std::cout << "\n--- Creating original Dog ---" << std::endl;
	Dog original("I love bones!");

	std::cout << "\n--- Creating copy using copy constructor ---" << std::endl;
	Dog copy1(original);

	std::cout << "\n--- Creating copy using assignment operator ---" << std::endl;
	Dog copy2;
	copy2 = original;

	std::cout << "\n--- Verifying copies are independent ---" << std::endl;
	std::cout << "Original Dog address: " << &original << std::endl;
	std::cout << "Copy1 Dog address: " << &copy1 << std::endl;
	std::cout << "Copy2 Dog address: " << &copy2 << std::endl;

	std::cout << "\n=== DESTRUCTING ARRAY (TESTING VIRTUAL DESTRUCTORS) ===" << std::endl;
	for (int i = 0; i < ANIMAL_COUNT; i++)
	{
		std::cout << "\n--- Deleting Animal " << i + 1 << " (" << animals[i]->getType() << ") ---" << std::endl;
		delete animals[i];
	}

	std::cout << "\n=== DESTRUCTING STACK OBJECTS (DEEP COPY TEST) ===" << std::endl;
	std::cout << "Original, copy1, and copy2 will be destroyed automatically..." << std::endl;

	std::cout << "\n=== PROGRAM FINISHED - CHECK FOR MEMORY LEAKS ===" << std::endl;
	return 0;
}