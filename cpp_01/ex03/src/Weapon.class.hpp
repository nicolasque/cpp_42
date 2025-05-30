/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 14:23:19 by nquecedo          #+#    #+#             */
/*   Updated: 2025/05/30 14:37:38 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Weapon
{
	private:
		std::string _type;

	public:
		Weapon();
		Weapon(std::string type);
		~Weapon();
		const std::string &getType();
		void setType(std::string type);
};
