/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 02:15:04 by nquecedo          #+#    #+#             */
/*   Updated: 2025/06/20 02:41:29 by nquecedo         ###   ########.fr       */
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
#define IDEAS_NBR 100

class Brain
{
	private:
		std::string _ideas[IDEAS_NBR];
		static void copyIdeas();

	public:
		Brain();
		Brain(std::string idea);
		Brain(const Brain &other_brain);
		Brain &operator=(const Brain &other_brain);
		~Brain();
};
