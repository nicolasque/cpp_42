/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 22:08:01 by nquecedo          #+#    #+#             */
/*   Updated: 2025/06/20 02:41:24 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Brain.class.hpp"

class Animal
{
protected:
	std::string _type;
	Brain *_brain;

public:
	Animal();
	Animal(std::string type);
	Animal(const Animal &animal);
	Animal &operator=(const Animal &new_animal);
	virtual ~Animal();
	std::string getType() const;
	virtual void makeSound() const;
};