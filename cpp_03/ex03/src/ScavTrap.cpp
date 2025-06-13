/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 15:02:16 by nquecedo          #+#    #+#             */
/*   Updated: 2025/06/13 03:44:07 by nquecedo         ###   ########.fr       */
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
	std::cout << "Now ScavTrap " << this->getName() << "is in gate keep mode" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		--this->_energyPoints;
	}
	else
		std::cout << this->_name << " not enough energy points or not enough health." << std::endl;
	std::cout << std::endl;
}
