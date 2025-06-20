/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 02:25:13 by nquecedo          #+#    #+#             */
/*   Updated: 2025/06/20 02:44:00 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Brain.class.hpp"

Brain::Brain()
{
	std::cout << "Brain default contructor has been called" << std::endl;
	for (int i = 0; i < IDEAS_NBR; i++)
	{
		this->_ideas[i] = "Default idea";
	}
}

Brain::Brain(std::string idea)
{
	std::cout << "Brainn constructor with str" << std::endl;
	for (int i = 0; i < IDEAS_NBR; i++)
	{
		this->_ideas[i] = idea;
	}
}

Brain::Brain(const Brain &other_brain)
{
	for (int i = 0; i < IDEAS_NBR; i++)
	{
		this->_ideas[i] = other_brain._ideas[i];
	}
}

Brain &Brain::operator=(const Brain &other_brain)
{
	if (this != &other_brain)
	{
		for (int i = 0; i < IDEAS_NBR; i++)
		{
			this->_ideas[i] = other_brain._ideas[i];
		}
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}