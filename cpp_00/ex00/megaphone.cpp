/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 16:28:36 by nquecedo          #+#    #+#             */
/*   Updated: 2025/05/27 18:10:43 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>

char ft_es_toupper(char c)
{
	std::string minus;
	std::string capital;

	minus = "áéíóúñü";
	capital = "ÁÉÍÓÚÑÜ";
	for (int i = 0; i < 7; i++)
	{
		if (minus[i] == c)
			c = capital[i];
	}
	return c;
}

int main(int argc, char **argv)
{
	char c;

	if (argc <= 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		std::cout << std::endl;
		return (1);
	}
	for (int i = 1; i < argc; i++)
	{
		for (int j = 0; argv[i][j] != '\0'; j++)
		{
			if ((unsigned char)argv[i][j] > 127)
				c = ft_es_toupper(argv[i][j]);
			else
				c = toupper(argv[i][j]);
			std::cout << c;
		}
		std::cout << " ";
	}
	std::cout << std::endl;
}
