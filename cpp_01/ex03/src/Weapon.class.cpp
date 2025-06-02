/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 14:23:16 by nquecedo          #+#    #+#             */
/*   Updated: 2025/06/02 13:21:47 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.class.hpp"

Weapon::Weapon()
{
	this->_type = "Default weapon";
}

Weapon::Weapon(std::string type)
{
	this->_type = type;
}

Weapon::~Weapon()
{
	std::cout << BOLD_CYAN << "Weapon: " << this->getType() << " destructor was called" << RESET << std::endl;
}

const std::string& Weapon::getType()
{
	std:: string &type = this->_type;
	return (type);
}

void Weapon::setType(std::string type)
{
	this->_type = type;
}
