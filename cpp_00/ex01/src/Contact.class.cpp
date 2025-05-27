/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 19:23:18 by nquecedo          #+#    #+#             */
/*   Updated: 2025/05/27 22:40:44 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

Contact::Contact()
{
	this->_first_name = ft_get_field("First name: ");
	this->_second_name = ft_get_field("Second name: ");
	this->_nickname = ft_get_field("Nickname: ");
	this->_phone_number = ft_get_field("Phone number: ");
	this->_darkest_secret = ft_get_field("Darkest secret: ");

}

Contact::~Contact()
{
	std::cout << "destructor called" << std::endl;
}

void Contact::ft_print_all()
{
	std::cout << "Name: " << this->_first_name << std::endl;
	std::cout << "Second name: " << this->_second_name << std::endl;
	std::cout << "Nikname: " << this->_nickname << std::endl;
	std::cout << "Phone mumber: " << this->_phone_number << std::endl;
	std::cout << "Bigest secret: " << this->_darkest_secret << std::endl;
	
}