/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 23:29:08 by nquecedo          #+#    #+#             */
/*   Updated: 2025/09/10 20:26:33 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.hpp"

int main()
{
    Data newData;
    Data* deSerialiceData;
    intptr_t serialicePtr;

    newData.dataInt = 42;
    newData.str = "Hello evaluator";

    std::cout << "Data int: " << newData.dataInt << " Data str: " << newData.str << std::endl;
    std::cout << &newData << " Data ptr value." << std::endl;
    serialicePtr = Serializer::serialize(&newData);
    std::cout << "0x" << std::hex << serialicePtr << " Data serialiced value." << std::endl;
    deSerialiceData = Serializer::deserialize(serialicePtr);
    std::cout << "=====================" << std::endl;
    std::cout << deSerialiceData << " Deserialice data ptr value." << std::endl;
    std::cout << "Deserialice data int: " << deSerialiceData->dataInt << " Deserialice data str: " << deSerialiceData->str << std::endl;


    return (0);
}
