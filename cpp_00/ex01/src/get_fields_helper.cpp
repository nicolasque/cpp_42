/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_fields_helper.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 22:09:58 by nquecedo          #+#    #+#             */
/*   Updated: 2025/06/19 18:51:01 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

std::string ft_getline(std::string field_name)
{
	std::string field;

	do
	{
		std::cout << field_name;
		std::getline(std::cin, field);
		if (std::cin.fail() || std::cin.eof())
		{
			std::cin.clear();
			std::freopen("/dev/tty", "r", stdin);
			std::cout << std::endl;
		}
		for (size_t i = 0; i < field.length(); i++)
		{
			if (static_cast<unsigned char>(field[i]) > 127)
			{
				std::cout << YELLOW << "Invalid character (DOG)" << RESET << std::endl;
				field = "";
			}
		}
	} while (field.empty());
	return field;
}

bool ft_check_phone_nbr(std::string str)
{
	if (str.length() != 9)
	{
		std::cout << "\033[31mInvalid phone number (Number to short or to long)\033[0m" << std::endl;
		return (false);
	}
	for (size_t i = 0; i < str.length(); i++)
	{
		if (std::isdigit(str[i]) == 0)
		{
			std::cout << "\033[31mInvalid phone number (Only accepts numbers)\033[0m" << std::endl;
			return (false);
		}
	}
	return (true);
}
