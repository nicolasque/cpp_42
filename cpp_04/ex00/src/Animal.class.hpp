/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 22:08:01 by nquecedo          #+#    #+#             */
/*   Updated: 2025/06/20 00:25:31 by nquecedo         ###   ########.fr       */
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

class Animal
{
	protected:
		std::string _type;

	public:
	Animal();
	Animal(std::string type);
	Animal(const Animal &animal);
	Animal &operator=(const Animal &new_animal);
	~Animal();
	std::string getType() const;
	virtual void makeSound() const;

};