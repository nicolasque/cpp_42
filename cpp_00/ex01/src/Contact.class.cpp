/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 19:23:18 by nquecedo          #+#    #+#             */
/*   Updated: 2025/05/27 22:29:21 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

Contact::Contact()
{
	this->_first_name = ft_get_field("First name: ");
	std::cout << "Nombre: " << this->_first_name << std::endl;
}

Contact::~Contact()
{
	std::cout << "destructor called" << std::endl;
}