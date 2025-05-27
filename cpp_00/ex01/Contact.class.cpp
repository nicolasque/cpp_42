/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 19:23:18 by nquecedo          #+#    #+#             */
/*   Updated: 2025/05/27 22:09:39 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact()
{
	this->_first_name = "";

	do
	{
		std::cout << "First name: ";
		std::getline(std::cin, this->_first_name);
		if (std::cin.fail() || std::cin.eof())
		{
			std::cin.clear();
            freopen("/dev/tty", "r", stdin);
		}
		std::cout << std::endl;
	} while(this->_first_name.empty());

	if (std::cin.fail() == true)
		std::cerr << "Read_line fail." << std::endl;
	std::cout << "Nombre: " << this->_first_name << std::endl;
}

Contact::~Contact()
{
	std::cout << "destructor called" << std::endl;
}