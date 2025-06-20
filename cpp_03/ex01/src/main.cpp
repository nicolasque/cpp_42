/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 15:26:54 by nquecedo          #+#    #+#             */
/*   Updated: 2025/06/13 00:19:26 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
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