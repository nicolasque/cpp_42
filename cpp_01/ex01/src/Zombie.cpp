/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 00:09:46 by nquecedo          #+#    #+#             */
/*   Updated: 2025/05/30 01:06:16 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << GREEN <<"Default Zombie constructor has been caled" << RESET << std::endl;
	this->name = "Default name";
}

Zombie::Zombie(std::string zombien_name)
{
	std::cout << GREEN <<"Constructor with parameters has been caled" << RESET <<std::endl;
	this->name = zombien_name;
}

void Zombie::announce()
{
	std::cout << BOLD_BLUE << this->name << RESET << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Desctructor for: " << BOLD_BLUE << this->name << RESET << " has been called" << std::endl;
}

void Zombie::set_name(std::string name)
{
	this->name = name;
}