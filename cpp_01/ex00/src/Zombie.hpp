/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 23:35:53 by nquecedo          #+#    #+#             */
/*   Updated: 2025/05/30 00:35:57 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>
#include <sstream>
#include <cstdio>
#include <cstdlib>

#define RESET "\033[0m"
#define GREEN "\033[0;32m"
#define MAGENTA "\033[0;35m"
#define BOLD_BLUE "\033[1;34m"




class Zombie
{
	private:
	std::string name;
	
	public:
	void announce(void);
	Zombie();
	Zombie(std::string zombien_name);
	~Zombie();
};


Zombie* newZombie( std::string name );
void randomChump(std::string name);
