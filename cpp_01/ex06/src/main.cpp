/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 21:55:52 by nquecedo          #+#    #+#             */
/*   Updated: 2025/06/11 20:26:49 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl harlIto;
	if (argc != 2)
	{
		std::cout << "Invalid number of arguments" << std::endl;
		return (1);
	}
	harlIto.complain(argv[1]);
}
