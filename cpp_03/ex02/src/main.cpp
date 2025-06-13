/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 15:26:54 by nquecedo          #+#    #+#             */
/*   Updated: 2025/06/13 02:53:33 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	{
		std::string calpTrap_name = "Mega Clap";
		std::string scalpTrap_name = "Mega Scav";

		ClapTrap megaClap(calpTrap_name);
		ScavTrap megaSclav(scalpTrap_name);

		megaSclav.beRepaired(50);
		megaSclav.takeDamage(75);
		megaSclav.guardGate();
		megaSclav.takeDamage(75);
		megaSclav.takeDamage(75);
	}
	std::cout << "==================================" << std::endl;
	{
		FragTrap megaFrag("Fragatron");

		megaFrag.attack("Nicolason");
		megaFrag.takeDamage(99);
		megaFrag.beRepaired(42);
		megaFrag.highFivesGuys();
	}
}