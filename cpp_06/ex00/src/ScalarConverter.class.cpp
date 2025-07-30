/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.class.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 20:47:21 by nquecedo          #+#    #+#             */
/*   Updated: 2025/07/30 02:23:08 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.hpp"

#define BAD_ARGUMENT 33
#define PSEUDO_LITERAL 10

static int detectPseudoLiterals(std::string input)
{
	if (!input.compare("nan") || !input.compare("nanf"))
	{
		std::cout << "char: imposible \n"
				  << "int: imposible \n"
				  << "float: nanf \n"
				  << "double: nan" << std::endl;
		return (PSEUDO_LITERAL);
	}
	else if (!input.compare("-inff") || !input.compare("-inf"))
	{
		std::cout << "char: imposible \n"
				  << "int: imposible \n"
				  << "float: -inff \n"
				  << "double: -inf" << std::endl;
		return (PSEUDO_LITERAL);
	}
	else if (!input.compare("+inff") || !input.compare("+inf") || !input.compare("inf") || !input.compare("inff"))
	{
		std::cout << "char: imposible \n"
				  << "int: imposible \n"
				  << "float: inff \n"
				  << "double: inf" << std::endl;
		return (PSEUDO_LITERAL);
	}
	if (input.length() > 1)
	{
		// if (std::count(input.begin(), input.end(), '.') > 1 ||
		// 	std::count(input.begin(), input.end(), 'f') > 1 ||
		// 	std::count(input.begin(), input.end(), '+') > 1 ||
		// 	std::count(input.begin(), input.end(), '-') > 1)
		// 	return (BAD_ARGUMENT);
		// for (size_t i = 0; i < input.length(); i++)
		// {
		// 	char c = input[i];

		// 	// Permitir signo solo al principio
		// 	if ((c == '+' || c == '-') && i != 0)
		// 		return (BAD_ARGUMENT);

		// 	// Permitir 'f' solo al final
		// 	else if (c == 'f' && i != input.length() - 1)
		// 		return (BAD_ARGUMENT);

		// 	// Permitir punto decimal
		// 	else if (c == '.')
		// 		continue;

		// 	// Permitir signos al principio
		// 	else if ((c == '+' || c == '-') && i == 0)
		// 		continue;
		// 	else if (c == 'f' && i == input.length() - 1)
		// 		continue;
		// 	// Todo lo demás debe ser dígito
		// 	else if (!isdigit(c))
		// 		return (BAD_ARGUMENT);
		// }
		char* endptr;
        std::strtod(input.c_str(), &endptr);
        
        // Si queda algo después de la conversión (excepto 'f' al final)
        if (*endptr != '\0' && !(strlen(endptr) == 1 && *endptr == 'f'))
            return (BAD_ARGUMENT);
	}
	return (0);
}

void ScalarConverter::convert(std::string input)
{
	double rawValue;
	char *endptr;

	rawValue = std::strtod(input.c_str(), &endptr);
	if (rawValue > std::numeric_limits<double>::max() ||
		rawValue < std::numeric_limits<double>::min() ||
		detectPseudoLiterals(input))
	{
		std::cout << "Invalid input." << std::endl;
		return;
	}
	else
		std::cout << "de momento bien" << std::endl;
	std::cout << rawValue << " este es el numero." << std::endl;
}
