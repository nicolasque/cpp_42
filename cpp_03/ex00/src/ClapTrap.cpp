/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 15:27:25 by nquecedo          #+#    #+#             */
/*   Updated: 2025/06/10 22:57:56 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name),
										_hitPoints(10),
										_energyPoints(10),
										_attackDamage(0)
{
	std::cout << "Default constructor has been called" << std::endl;
}

ClapTrap::ClapTrap(std::string name, int hitPoints, int energyPoints, int attackDamage) : _name(name),
																							_hitPoints(hitPoints),
																							_energyPoints(energyPoints),
																							_attackDamage(attackDamage)
{
	std::cout << "All confugured  has been called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clapTrap) : _name(clapTrap._name),
												_hitPoints(clapTrap._hitPoints),
												_energyPoints(clapTrap._energyPoints),
												_attackDamage(clapTrap._attackDamage)
{
	std::cout << "Copy constructor has been called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &clapTrap)
{
	std::cout << "= operator has been called" << std::endl;
	if (this != &clapTrap)
	{
		this->_name = clapTrap._name;
		this->_hitPoints = clapTrap._hitPoints;
		this->_energyPoints = clapTrap._energyPoints;
		this->_attackDamage = clapTrap._attackDamage;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor has been called" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		std::cout << "Claptrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
		--this->_energyPoints;
	}
	else
		std::cout << this->_name << " not enough energy points or not enough health." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		std::cout << this->_name << ": has repaired " << amount << std::endl;
		--this->_energyPoints;
		this->_hitPoints += amount;
	}
	else
		std::cout << this->_name << " not enough energy points or not enough health." << std::endl;
	this->_printStats();
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints > 0)
	{
		if ((int)amount >= this->_hitPoints)
			this->_hitPoints = 0;
		else
			this->_hitPoints -= amount;
		std::cout << this->_name << "Has taken " << amount << " of damage!!" << std::endl;
	}
	else
		std::cout << this->_name << " Is already dead." << std::endl;

	this->_printStats();
}

void ClapTrap::_printStats() const
{
	std::cout << this->_name << " | Health: " << this->_hitPoints << " | Energy: " << this->_energyPoints << " |" << std::endl;
}