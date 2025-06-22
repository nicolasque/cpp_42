/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 18:06:36 by nquecedo          #+#    #+#             */
/*   Updated: 2025/06/22 23:25:04 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cctype>
#include <sstream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include "ICharacter.class.hpp"
#include "IMateriaSource.class.hpp"

class AMateria
{
protected:
std::string _type;

public:
	AMateria();
	AMateria(std::string const &type);
	AMateria(const AMateria &new_materia);
	~AMateria();
	AMateria &operator=(const AMateria &cpy_materia);
	std::string const &getType() const;
	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter &target);
};
