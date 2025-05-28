/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 19:24:10 by nquecedo          #+#    #+#             */
/*   Updated: 2025/05/28 17:29:00 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->contact_count = 0;
	this->contact_range = 0;
	for (int i = 0; i < MAX_CONTACT; i++)
		this->book[i] = NULL;
}

PhoneBook::~PhoneBook()
{
	std::cout << "PhoneBook destuctor called" << std::endl;
	for (int i = 0; this->book[i]; i++)
		delete(this->book[i]);
}

void PhoneBook::ft_add_contact()
{
	Contact *new_contact = new Contact();

	std::cout << "=================================\n Adding new contact: " << std::endl;
	if (this->contact_count < 8)
	{
		if (this->book[this->contact_range] != NULL)
			delete(this->book[this->contact_range]);
		new_contact->ft_add_index(contact_count);
		this->book[this->contact_range] = new_contact;
		this->contact_range++;
	}
	if (contact_range >= 8)
		contact_range = 0;
	contact_count++;
}

void PhoneBook::ft_print_all_contacts() const
{
	if (this->contact_range < 1)
	{
		std::cout << YELLOW << "There are no contacts, use ADD to add contact." << RESET << std::endl;
		return ;
	}
	for (int i = 0; i < this->contact_range; i++)
	{
		// this->book[i]->ft_print_all_info(); //Esto me vale para imprimir cuadno busque el contacto
		this->book[i]->ft_print_formated();
	}
}

Contact *PhoneBook::ft_check_index(int index)
{
	for (int i; this->book[i] != nullptr; i++)
	{
		if (this->book[i]->ft_get_index() == index)
			return (this->book[i]);
	}
}

void PhoneBook::ft_search() const
{
	int chosed_index;
	ft_print_all_contacts();

	do
	{
		std::stringstream  ss(ft_getline("Chose the index of a user to se the all user data: "));
		ss >> chosed_index;

	} while (chosed_index);
}
