/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 02:36:39 by nquecedo          #+#    #+#             */
/*   Updated: 2025/06/13 02:47:41 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30)
{
	std::cout << "FragTrap has been sumoned " << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap has been DESTOYED " << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap wants a high five! Give me five!" << std::endl;
}
