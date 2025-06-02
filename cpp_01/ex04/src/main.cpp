/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 14:23:14 by nquecedo          #+#    #+#             */
/*   Updated: 2025/06/02 21:13:18 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.class.hpp"

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
	return (false);
}

int main(int argc, char **argv)
{
	if (ft_chech_Args(argc, argv))
		return (0);
	std::ifstream ReadFile(argv[1]);
	File file(argv[1], argv[2], argv[3]);
	file.setContent();
	std::cout << file.getContent() << std::endl;
	std::cout << "==================================================" <<  std::endl;
	file.replace(0);
	std::cout << file.getContent() << std::endl;
	file.writeNewFile();
	return 0;
}
