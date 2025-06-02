/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 14:23:09 by nquecedo          #+#    #+#             */
/*   Updated: 2025/06/02 14:02:52 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.class.hpp"


HumanB::HumanB(std::string name, Weapon *weapon) : _name(name), _weapon(weapon)
{
	std::cout << "HumanB constructor has been called: " << std::endl
			  << "name: " << BOLD_BLUE << name << RESET << std::endl;
	if (weapon)
		std::cout << "weapon type: " << BOLD_BLUE << weapon->getType() << RESET << std::endl;
	else
		std::cout << "HumanB is unarmed." << std::endl;
}

HumanB::~HumanB()
{
}

void HumanB::attack()
{
	if (this->_weapon)
		std::cout << this->_name << " attacks with " << this->_weapon->getType() << std::endl;
	else
		std::cout << this->_name << " cant atack because is unarmed" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}
