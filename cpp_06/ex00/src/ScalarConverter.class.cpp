/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.class.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 20:47:21 by nquecedo          #+#    #+#             */
/*   Updated: 2025/07/28 22:23:39 by nquecedo         ###   ########.fr       */
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
    else if (!input.compare("+inff") || !input.compare("+inf") || !input.compare("inf")|| !input.compare("inff"))
    {
        std::cout << "char: imposible \n"
        << "int: imposible \n"
        << "float: inff \n"
        << "double: inf" << std::endl;
        return (PSEUDO_LITERAL);
    }
    if (input.length() > 1)
    {
        for (size_t i = 0; i < input.length() ; i++)
        {
            if ((input[0] == '-' || input[0] == '+') && i == 0)
                i++;
            if (!isdigit(input[i]))
                return (BAD_ARGUMENT);
        }
    }
    return (0);
}

void ScalarConverter::convert(std::string input)
{
    if (detectPseudoLiterals(input))
    {
        std::cout << "Invalid input."  << std::endl;
        return;
    }
    std::cout << "de momento bien" << std::endl;
}
