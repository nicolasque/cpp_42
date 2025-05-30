/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 23:34:51 by nquecedo          #+#    #+#             */
/*   Updated: 2025/05/30 01:16:13 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#define ZOMBIE_NUM 5

int main()
{
	Zombie *horde;
	horde = zombieHorde(ZOMBIE_NUM, "hello");

	for (int i = 0; i < ZOMBIE_NUM; i++)
		horde[i].announce();
	delete [](horde);
	return (0);
}