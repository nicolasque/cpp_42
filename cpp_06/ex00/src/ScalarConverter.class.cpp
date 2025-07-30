/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.class.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 20:47:21 by nquecedo          #+#    #+#             */
/*   Updated: 2025/07/30 11:48:30 by nquecedo         ###   ########.fr       */
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
        if (std::count(input.begin(), input.end(), '.') > 1 ||
            std::count(input.begin(), input.end(), 'f') > 1 ||
            std::count(input.begin(), input.end(), '+') > 1 ||
            std::count(input.begin(), input.end(), '-') > 1)
            return (BAD_ARGUMENT);
        for (size_t i = 0; i < input.length(); i++)
        {
            char c = input[i];

            if ((c == '+' || c == '-') && i != 0)
                return (BAD_ARGUMENT);

            else if (c == 'f' && i != input.length() - 1)
                return (BAD_ARGUMENT);

            else if (c == '.')
                continue;

            else if ((c == '+' || c == '-') && i == 0)
                continue;
            else if (c == 'f' && i == input.length() - 1)
                continue;
            else if (!isdigit(c))
                return (BAD_ARGUMENT);
        }
        // char* endptr;
        // std::strtod(input.c_str(), &endptr);

        // // Si queda algo después de la conversión (excepto 'f' al final)
        // if (*endptr != '\0' && !(strlen(endptr) == 1 && *endptr == 'f'))
        //     return (BAD_ARGUMENT);
    }
    return (0);
}

static void printConversins(double rawBits)
{
    if (rawBits >= 32 && rawBits <= 126)
        std::cout << "char: " << static_cast<char>(rawBits) << std::endl;
    else
        std::cout << "char out of bound" << std::endl;

    if (rawBits < std::numeric_limits<int>::max() || std::numeric_limits<int>::min() > rawBits)
        std::cout << "int: " << static_cast<int>(rawBits) << std::endl;
    else
        std::cout << "int out of bound" << std::endl;

    if (rawBits < std::numeric_limits<float>::max() || std::numeric_limits<float>::min() > rawBits)
        std::cout << "float: " << static_cast<float>(rawBits) << std::endl;
    else
        std::cout << "float out of bound" << std::endl;

    if (rawBits < std::numeric_limits<double>::max() || std::numeric_limits<double>::min() > rawBits)
        std::cout << "double: " << static_cast<double>(rawBits) << std::endl;
    else
        std::cout << "double out of bound" << std::endl;
}

void ScalarConverter::convert(std::string input)
{
    double rawValue;
    char *endptr;

    if (input.length() == 1)
        rawValue = static_cast<double>(input[0]);
    else
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

    printConversins(rawValue);
}
