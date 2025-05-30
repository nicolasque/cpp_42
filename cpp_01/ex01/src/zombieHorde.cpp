/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 00:45:50 by nquecedo          #+#    #+#             */
/*   Updated: 2025/05/30 01:11:07 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

static std::string intToString(int num)
{
    std::stringstream ss;
    ss << num;
    return ss.str();
}

Zombie* zombieHorde(int N, std::string name)
{
	if (N < 1)
	{
		std::cout << "Invalid number of zombies" << std::endl;
		return (NULL);
	}
	Zombie *horde = new Zombie[N];
	for (int i = 0; i < N; i++)
		horde[i].set_name(name + intToString(i));
	return (horde);
}