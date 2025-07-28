/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.class.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 20:47:21 by nquecedo          #+#    #+#             */
/*   Updated: 2025/07/28 21:18:51 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.hpp"

#define BAD_ARGUMENT 33
#define PSEUDO_LITERAL 10

static int detectPseudoLiterals(std::string input)
{
    if (input.compare("nan") || input.compare("nanf"))
    {
        std::cout << "char: imposible \n"
        << "int: imposible \n"
        << "float: nanf \n"
        << "double: nan" << std::endl;
        return (PSEUDO_LITERAL);
    }
    else if (input.compare("-inff") || input.compare("-inf"))
    {
        std::cout << "char: imposible \n"
        << "int: imposible \n"
        << "float: -inff \n"
        << "double: -inf" << std::endl;
        return (PSEUDO_LITERAL);
    }
    else if (input.compare("+inff") || input.compare("+inf") || input.compare("inf")|| input.compare("inff"))
    {
        std::cout << "char: imposible \n"
        << "int: imposible \n"
        << "float: inff \n"
        << "double: inf" << std::endl;
        return (PSEUDO_LITERAL);
    }
    if (input.length() > 1)
    {
        std::cout << "Invalid input."  << std::endl;
        return (BAD_ARGUMENT);
    }
    return (0);
}

void ScalarConverter::convert(std::string input) const
{
    if (detectPseudoLiterals(input));
        return;
    std::cout << "de momento bien" << std::endl;
}