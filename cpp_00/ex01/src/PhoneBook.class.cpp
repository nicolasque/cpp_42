/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 19:24:10 by nquecedo          #+#    #+#             */
/*   Updated: 2025/05/28 01:13:49 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->contact_count = 0;
	this->contact_range = 0;
}

PhoneBook::~PhoneBook()
{
	std::cout << "PhoneBook destuctor called" << std::endl;
}

void PhoneBook::ft_add_contact()
{
	Contact *new_contact = new Contact();

	std::cout << "=================================\n Adding new contact: " << std::endl;
	if (this->contact_count < 8)
	{
		new_contact->ft_add_index(contact_count);
		this->book[this->contact_count] = new_contact;
		this->contact_range++;
	}
	if (contact_range >= 8)
		contact_range = 0;
	contact_count++;
}


void PhoneBook::ft_print_all_contacts()
{
	std::cout << "=====================" << std::endl;
	if (this->contact_range < 1)
	{
		std::cout << "There are no contacts, use ADD to add contact." << std::endl;
		return ;
	}
	for (int i = 0; i < this->contact_range; i++)
	{
		this->book[i]->ft_print_contact();
	}
	std::cout << "=====================" << std::endl;

}