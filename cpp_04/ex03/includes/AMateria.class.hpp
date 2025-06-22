/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 18:06:36 by nquecedo          #+#    #+#             */
/*   Updated: 2025/06/22 18:44:57 by nquecedo         ###   ########.fr       */
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
#include "IMateriaSource.hpp"

class AMateria
{
protected:
public:
	AMateria(std::string const &type);
	std::string const &getType() const;
	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter &target);
};
