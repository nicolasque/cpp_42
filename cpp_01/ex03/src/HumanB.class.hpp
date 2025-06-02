/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 14:23:12 by nquecedo          #+#    #+#             */
/*   Updated: 2025/06/02 14:05:50 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Weapon.class.hpp"

class HumanB
{
private:
	const std::string _name;
	Weapon *_weapon;

public:
	HumanB(std::string name, Weapon *weapon = NULL);
	~HumanB();
	void setWeapon(Weapon &weapon);
	void attack();
};
