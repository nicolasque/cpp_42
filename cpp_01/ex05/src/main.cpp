/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 21:55:52 by nquecedo          #+#    #+#             */
/*   Updated: 2025/06/03 00:27:07 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl harlIto;

	harlIto.complain("DEBUG");
	std::cout << "=============================" << std::endl;
	harlIto.complain("INFO");
	std::cout << "=============================" << std::endl;
	harlIto.complain("WARNING");
	std::cout << "=============================" << std::endl;
	harlIto.complain("ERROR");
	std::cout << "=============================" << std::endl;
	harlIto.complain("ERRORdewefwefef");

}