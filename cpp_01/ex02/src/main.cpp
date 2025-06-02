/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 13:46:21 by nquecedo          #+#    #+#             */
/*   Updated: 2025/06/02 15:35:05 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <iomanip>
#include <cctype>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "The memori adres of the strings: " << &str << std::endl;
	std::cout << "The memori adres held by stringPTR: " << stringPTR << std::endl;
	std::cout << "The memori adres held by stringREF: " << &stringREF << std::endl;
	std::cout << "===========================================================================" << std::endl;
	std::cout << "The value of the strings: " << str << std::endl;
	std::cout << "The value held by stringPTR: " << *stringPTR << std::endl;
	std::cout << "The value held by stringREF: " << stringREF << std::endl;

	return (0);
}
