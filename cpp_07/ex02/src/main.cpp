/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 21:48:17 by nquecedo          #+#    #+#             */
/*   Updated: 2025/09/12 18:45:45 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
    Array<int> a(9);
    for (int i = 0; i < 9; i++)
    {
        a[i] = i;
    }
    for (int i = 0; i < 9; i++)
    {
        std::cout << a[i] << std::endl;
    }

    try {
        a[10];
    } catch (std::exception &e)
    { std::cerr << "Exception caught: " << e.what() << std::endl;}
}