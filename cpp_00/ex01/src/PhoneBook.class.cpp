/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 19:24:10 by nquecedo          #+#    #+#             */
/*   Updated: 2025/06/19 14:55:52 by nquecedo         ###   ########.fr       */
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
	for (int i = 0; this->book[i] && i < MAX_CONTACT; i++)
		delete (this->book[i]);
}

void PhoneBook::ft_add_contact()
{
	Contact *new_contact = new Contact();

	if (this->contact_range < MAX_CONTACT)
	{
		if (this->book[this->contact_range] != NULL)
			delete (this->book[this->contact_range]);
		new_contact->ft_add_index(contact_count);
		this->book[this->contact_range] = new_contact;
		this->contact_range++;
	}
	if (contact_range >= MAX_CONTACT)
		contact_range = 0;
	contact_count++;
}

bool PhoneBook::ft_print_all_contacts() const
{
	if (this->contact_count < 1)
	{
		std::cout << YELLOW << "There are no contacts, use ADD to add contact." << RESET << std::endl;
		return (false);
	}
	for (int i = 0; this->book[i] && i < MAX_CONTACT; i++)
		this->book[i]->ft_print_formated();
	return (true);
}

Contact *PhoneBook::ft_check_index(int index) const
{
	for (int i = 0; this->book[i] && i < MAX_CONTACT; i++)
	{
		if (this->book[i]->ft_get_index() == index)
			return (this->book[i]);
	}
	return (NULL);
}

void PhoneBook::ft_search() const
{
	int chosed_index;
	Contact *printed_contact;
	std::string str_string;

	if (!ft_print_all_contacts())
		return;
	do
	{
		str_string = ft_getline("Chose the index of a user to se the all user data: ");
		if (!str_string.find_first_not_of("0123456789"))
			continue;
		chosed_index = std::atoi(str_string.c_str());
		printed_contact = ft_check_index(chosed_index);
	} while (printed_contact == NULL);
	printed_contact->ft_print_all_info();
}
