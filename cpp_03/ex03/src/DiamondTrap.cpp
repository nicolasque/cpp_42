/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/13 01:59:39 by nquecedo          #+#    #+#             */
/*   Updated: 2025/06/13 03:36:58 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string newName) : ClapTrap(newName + "_clap_name") , FragTrap((newName + "_clap_name")), ScavTrap(newName + "_clap_name")
{
	this->_name = newName;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamonTrap destructor has been called. " << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << "I have two traps inside of me, my good side: " << this->_name << " and my evil side: " << ClapTrap::_name << std::endl;
}