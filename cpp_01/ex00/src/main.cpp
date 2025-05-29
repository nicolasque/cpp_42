/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 23:34:51 by nquecedo          #+#    #+#             */
/*   Updated: 2025/05/30 00:39:33 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	std::cout << "======================================================" << std::endl;
	std::cout << "Test 1º zombie default construcotor" << std::endl;
	Zombie zombie1;
	zombie1.announce();
	std::cout << "======================================================" << std::endl;
	std::cout << "Test 2º zombie constructor with parameters" << std::endl;
	Zombie zombie2("MIkelon");
	zombie2.announce();
	std::cout << "======================================================" << std::endl;
	std::cout << "Test 3º randomChump (stak)" << std::endl;
	randomChump("Supreme_chump");
	std::cout << "======================================================" << std::endl;
	std::cout << "Test 4º newZombie (heap)" << std::endl;
	Zombie *malloc_zombie = newZombie("Malokooon");
	malloc_zombie->announce();
	delete (malloc_zombie);
	std::cout << "======================================================" << std::endl;

	return (0);
}