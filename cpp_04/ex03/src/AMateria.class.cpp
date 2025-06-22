/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 22:53:00 by nquecedo          #+#    #+#             */
/*   Updated: 2025/06/22 23:25:22 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/AMateria.class.hpp"

AMateria::AMateria() : _type("Default materia")
{
}

AMateria::AMateria(std::string const &type) : _type(type)
{

}

AMateria::AMateria(const AMateria &new_materia) : _type(new_materia._type)
{

}

AMateria::~AMateria()
{

}

AMateria &AMateria::operator=(const AMateria &cpy_materia)
{
	if (this != &cpy_materia)
	{
		this->_type = cpy_materia._type;
	}
	return (*this);
}

const std::string &AMateria::getType() const
{
	return (this->_type);
}
