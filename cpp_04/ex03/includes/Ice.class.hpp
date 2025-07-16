/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 00:02:56 by nquecedo          #+#    #+#             */
/*   Updated: 2025/06/23 00:04:10 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.class.hpp"

class Ice: public AMateria
{
	public:
		Ice();
		Ice(const Ice& other);
		~Ice();

		Ice&	operator = (const Ice& other);
		Ice*	clone() const;
		void	use(ICharacter& target);
};
