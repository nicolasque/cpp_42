/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 19:23:18 by nquecedo          #+#    #+#             */
/*   Updated: 2025/05/28 00:28:44 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

Contact::Contact()
{
	this->_first_name = ft_getline("First name: ");
	this->_second_name = ft_getline("Second name: ");
	this->_nickname = ft_getline("Nickname: ");
	do
	{
		this->_phone_number = ft_getline("Phone number: ");
	} while (!ft_check_phone_nbr(this->_phone_number));

	this->_darkest_secret = ft_getline("Darkest secret: ");
}

Contact::~Contact()
{
	std::cout << "Contact destructor called" << std::endl;
}

void Contact::ft_print_all()
{
	std::cout << "Name: " << this->_first_name << std::endl;
	std::cout << "Second name: " << this->_second_name << std::endl;
	std::cout << "Nikname: " << this->_nickname << std::endl;
	std::cout << "Phone mumber: " << this->_phone_number << std::endl;
	std::cout << "Bigest secret: " << this->_darkest_secret << std::endl;
}

void Contact::ft_add_index(int index)
{
	this->_index = index;
}