/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 21:55:47 by nquecedo          #+#    #+#             */
/*   Updated: 2025/06/03 00:49:34 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug(void)
{
	std::cout << "[DEBUG]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.I really do !" << std::endl;
}
void Harl::info(void)
{
	std::cout << "[INFO]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn´t put enough bacon in my burger! If you did, I wouldn´t be asking for more!" << std::endl;
}
void Harl::warning(void)
{
	std::cout << "[WARNING]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I´ve been coming foryears, whereas you started working here just last month." << std::endl;
}
void Harl::error(void)
{
	std::cout << "[ERROR]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	int nbr_level = 4;

	Complains complainLst[4] = {
		{"DEBUG", &Harl::debug},
		{"INFO", &Harl::info},
		{"WARNING", &Harl::warning},
		{"ERROR", &Harl::error}};
	for (int i = 0; i < 4; i++)
	{
		if (complainLst[i].level == level)
		{
			nbr_level = i;
		}
	}
	switch (nbr_level)
	{
	case 0:
		(this->*complainLst[0].complain)();
	case 1:
		(this->*complainLst[1].complain)();
	case 2:
		(this->*complainLst[2].complain)();
	case 3:
		(this->*complainLst[3].complain)();
		break;

	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break;
	}
}
