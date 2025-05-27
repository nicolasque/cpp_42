/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 19:24:44 by nquecedo          #+#    #+#             */
/*   Updated: 2025/05/28 00:39:30 by nquecedo         ###   ########.fr       */
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
	}

	// Contact prueba;
	// prueba.ft_print_all();
	return(0);
}