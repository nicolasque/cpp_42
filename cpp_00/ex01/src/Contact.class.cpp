/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 19:23:18 by nquecedo          #+#    #+#             */
/*   Updated: 2025/05/28 17:21:07 by nquecedo         ###   ########.fr       */
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

void Contact::ft_print_all_info()
{
	std::cout << "Index: " << this->_index << std::endl;
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

void Contact::ft_print_formated()
{
    std::string first_name = this->_first_name.length() > 10 ? this->_first_name.substr(0, 9) + "." : this->_first_name;
	std::string second_name = this->_second_name.length() > 10 ? this->_second_name.substr(0, 9) + "." : this->_second_name;
	std::string nickname = this->_nickname.length() > 10 ? this->_nickname.substr(0, 9) + "." : this->_nickname;
	std::cout << " | " << std::setw(10) << std::setfill(' ') << std::right << this->_index << " | ";
	std::cout << std::setw(10) << std::setfill(' ') << std::right << first_name << " | ";
	std::cout << std::setw(10) << std::setfill(' ') << std::right << second_name << " | ";
	std::cout << std::setw(10) << std::setfill(' ') << std::right << nickname << " | " << std::endl;
}

int Contact::ft_get_index()
{
	return (this->_index);
}
