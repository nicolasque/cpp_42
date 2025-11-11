/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 21:48:17 by nquecedo          #+#    #+#             */
/*   Updated: 2025/09/11 19:17:51 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main()
{
    int a = 5;
    int b = 2;

    std::cout << "Min: " << min(a,b) << std::endl;
    std::cout << "Max: " << max(a,b) << std::endl;

    std::cout << "A: " << a << " B: " << b << std::endl;
    std::cout << "Swap" << std::endl;
    swap(a,b);
    std::cout << "A: " << a << " B: " << b << std::endl;
}