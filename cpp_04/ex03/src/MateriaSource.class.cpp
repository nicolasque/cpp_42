/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.class.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 23:32:37 by nquecedo          #+#    #+#             */
/*   Updated: 2025/06/23 00:00:25 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/MateriaSource.class.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		_materia[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &cpy_materia)
{
	for (int i = 0; i < 4; i++)
		_materia[i] = NULL;
	*this = cpy_materia;
}

MateriaSource::~MateriaSource()
{
	for (size_t i = 0; i < 4; i ++)
		if (_materia[i])
			delete _materia[i];
}


MateriaSource &MateriaSource::operator=(const MateriaSource &cpy_materia)
{
	if (this == &cpy_materia)
		return (*this);
	for (int i = 0; i < MAX_MATERIA; i++)
	{
		if (_materia[i])
			delete (_materia[i]);
		this->_materia[i] = new AMateria(cpy_materia._materia[i]);
	}
}

void MateriaSource::learnMateria(AMateria* materia)
{
	
}
