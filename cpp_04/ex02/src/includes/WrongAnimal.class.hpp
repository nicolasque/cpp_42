/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 00:34:59 by nquecedo          #+#    #+#             */
/*   Updated: 2025/06/20 00:36:05 by nquecedo         ###   ########.fr       */
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
#include "Brain.class.hpp"

class WrongAnimal
{
	protected:
		std::string _type;
		Brain *_brain;

	public:
	WrongAnimal();
	WrongAnimal(std::string type);
	WrongAnimal(const WrongAnimal &wrongAnimal);
	WrongAnimal &operator=(const WrongAnimal &new_wrongAnimal);
	virtual ~WrongAnimal();
	std::string getType() const;
	virtual void makeSound() const = 0;

};