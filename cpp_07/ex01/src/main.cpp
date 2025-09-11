/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 21:48:17 by nquecedo          #+#    #+#             */
/*   Updated: 2025/09/11 19:48:57 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void addOne(int &nbr)
{
    nbr++;
}

void printArr(int c)
{
    std::cout << c << " ";
}


int  main()
{
    int arr[] = {1, 2, 3, 4 ,5};

    iter(arr, 5, printArr);
    iter(arr, 5, addOne);
    std::cout << std::endl;
    iter(arr, 5, printArr);
}