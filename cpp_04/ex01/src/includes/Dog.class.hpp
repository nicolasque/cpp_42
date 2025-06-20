/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 19:21:04 by nquecedo          #+#    #+#             */
/*   Updated: 2025/06/20 00:28:44 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.class.hpp"

class Dog : public Animal
{
	private:

	public:
		Dog();
		Dog(const Dog &cat);
		Dog &operator=(const Dog &cat);
		~Dog();
		void makeSound() const;
};

