/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 16:28:36 by nquecedo          #+#    #+#             */
/*   Updated: 2025/05/26 16:45:01 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>

int main(int argc, char **argv)
{
	if (argc <= 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n" << std::endl;
		return (1);
	}
	std::cout << std::endl;
	for (int i = 1; i < argc; i++)
	{
		std::cout << argv[i];
		std::cout << " ";

	}
}