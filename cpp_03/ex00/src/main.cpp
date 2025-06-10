/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 15:26:54 by nquecedo          #+#    #+#             */
/*   Updated: 2025/06/10 22:50:06 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	std::string enemy;
	ClapTrap megaClap("Mega cap");

	enemy = "Mega evaluator3000";
	megaClap.attack(enemy);
	megaClap.takeDamage(6);
	megaClap.beRepaired(3);
	megaClap.attack(enemy);
	megaClap.takeDamage(6);
	megaClap.attack(enemy);
	megaClap.takeDamage(6);
	megaClap.beRepaired(3);
	megaClap.attack(enemy);
	
}