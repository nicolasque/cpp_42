/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_fields_helper.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 22:09:58 by nquecedo          #+#    #+#             */
/*   Updated: 2025/05/27 22:28:10 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

std::string ft_get_field(std::string field_name)
{
	std::string field;

	do
	{
		std::cout << field_name;
		std::getline(std::cin, field);
		if (std::cin.fail() || std::cin.eof())
		{
			std::cin.clear();
			freopen("/dev/tty", "r", stdin);
		}
		std::cout << std::endl;
	} while (field.empty());
	return field;
}