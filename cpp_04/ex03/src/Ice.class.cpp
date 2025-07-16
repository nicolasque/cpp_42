/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 00:04:29 by nquecedo          #+#    #+#             */
/*   Updated: 2025/06/23 00:07:16 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Ice.class.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::Ice(const Ice &ice) {*this = ice;}

Ice Ice::&operator=()