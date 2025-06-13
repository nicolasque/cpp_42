/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 15:02:16 by nquecedo          #+#    #+#             */
/*   Updated: 2025/06/13 00:21:25 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20)
{
	std::cout << "ScavTrap has been sumoned " << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap has been DESTOYED " << std::endl;
}

void ScavTrap::guardGate()
{
	if (this->getEnergyPoints() > 0 && this->getHitPoints() > 0)
		std::cout << "Now ScavTrap " << this->getName() << "is in gate keep mode" << std::endl;
	else
		std::cout << this->getName() << " has no nergy points or live" << std::endl;
}
