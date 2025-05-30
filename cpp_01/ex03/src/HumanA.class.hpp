/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 14:23:07 by nquecedo          #+#    #+#             */
/*   Updated: 2025/05/30 14:44:05 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.class.hpp"

class HumanA
{
	private:
		std::string _name;
		Weapon& _weapon;

	public:
		HumanA();
		~HumanA();
};
