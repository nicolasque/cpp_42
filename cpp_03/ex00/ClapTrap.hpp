/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 15:27:34 by nquecedo          #+#    #+#             */
/*   Updated: 2025/06/10 15:35:42 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP


#include <string>
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <cctype>
#include <sstream>
#include <cstdio>
#include <cstdlib>
#include <cmath>

class ClapTrap
{
	private:
		std::string _name;
		int	_hitPoints;
		int _energyPoints;
		int _attackDamage;

	public:
		ClapTrap();
		ClapTrap(std::string name, int hitPoints, int energyPoints, int attackDamage);
		ClapTrap(const ClapTrap &clapTrap);
		ClapTrap &operator=(const ClapTrap &ClapTrap);
		~ClapTrap();
};


#endif //CLAPTRAP_HPP
