/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 21:55:49 by nquecedo          #+#    #+#             */
/*   Updated: 2025/06/03 00:23:22 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <string>
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <cctype>
#include <sstream>
#include <cstdio>
#include <cstdlib>

class Harl
{
private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
	struct Complains
	{
		std::string level;
		void (Harl::*complain)();
	} s_complain;

public:
	Harl();
	~Harl();
	void complain(std::string level);
};

#endif // HARL_HPP