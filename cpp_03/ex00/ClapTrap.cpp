/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 15:27:25 by nquecedo          #+#    #+#             */
/*   Updated: 2025/06/10 19:06:30 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name)
{
	std::cout << "Default constructor has been called" << std::endl;
}

ClapTrap::ClapTrap(std::string name, int hitPoints, int energyPoints, int attackDamage) :   _name(name),
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
	std::cout << "Destructro has been called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	
}