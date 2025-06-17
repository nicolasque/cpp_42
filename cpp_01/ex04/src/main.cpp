/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 14:23:14 by nquecedo          #+#    #+#             */
/*   Updated: 2025/06/16 21:53:48 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.class.hpp"

bool ft_check_chars(char *argv)
{
	for (int i = 0; argv[i]; i++)
	{
		if ((unsigned char)argv[i] > 127)
			return (true);
	}
	return (false);
}

bool ft_chech_Args(int argc, char **argv)
{
	std::string content;
	if (argc != 4)
	{
		std::cout << RED << "Invalid number of arguments" << RESET << std::endl;
		return (true);
	}
	std::ifstream ReadFile(argv[1]);
	if (ReadFile.fail() == true || ReadFile.eof())
	{
		std::cout << RED << "Invalid file" << RESET << std::endl;
		return (true);
	}
	if (ft_check_chars(argv[1]) || ft_check_chars(argv[2]) || ft_check_chars(argv[3]))
	{
		std::cout << "Invalid character set (DOG)." << std::endl;
		return (true);
	}
	return (false);
}

int main(int argc, char **argv)
{
	if (ft_chech_Args(argc, argv))
		return (0);
	std::ifstream ReadFile(argv[1]);
	File file(argv[1], argv[2], argv[3]);
	file.setContent();
	file.replace(0);
	file.writeNewFile();
	return 0;
}
