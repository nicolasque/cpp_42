/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 14:23:04 by nquecedo          #+#    #+#             */
/*   Updated: 2025/06/02 13:15:25 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.class.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name) , _weapon(&weapon)
{
	std::cout << "HumanA constructor has been called: " << std::endl
			  << "name: " << BOLD_BLUE << name << RESET << std::endl
			  << "weapon type: " << BOLD_BLUE << weapon.getType() << RESET << std::endl;
}

HumanA::~HumanA()
{
}

void HumanA::attack()
{
	std::cout << this->_name << " attacks with " << this->_weapon->getType() << std::endl;
}