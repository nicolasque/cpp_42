/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 19:24:44 by nquecedo          #+#    #+#             */
/*   Updated: 2025/05/28 01:45:34 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

int main()
{
	PhoneBook phoneBook;
	std::string input;

	input = ".";
	while (input.compare("EXIT"))
	{
		input = ft_getline("ADD | SEARCH | EXIT \n Chose an optin: ");
		if (!input.compare("ADD"))
			phoneBook.ft_add_contact();
		else if (!input.compare("SEARCH"))
		{
			std::cout << "TODO: SEARCH" << std::endl;
			phoneBook.ft_print_all_contacts();
		}
		else
			std::cout << "\033[31mInvalid input 'ADD | SEARCH | EXIT' only.\033[0m" << std::endl;

	}

	// Contact prueba;
	// prueba.ft_print_all_info();
	return(0);
}