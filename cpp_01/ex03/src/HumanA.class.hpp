/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 14:23:07 by nquecedo          #+#    #+#             */
/*   Updated: 2025/06/02 13:15:11 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.class.hpp"

class HumanA
{
	private:
		const std::string _name;
		Weapon* _weapon;

	public:
		HumanA(std::string name, Weapon& weapon_type);
		~HumanA();
		void attack();
};
