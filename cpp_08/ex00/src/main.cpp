/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 21:48:17 by nquecedo          #+#    #+#             */
/*   Updated: 2025/11/11 15:34:27 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	int array[] = {1, 2, 3, 4 ,5};
	std::vector<int> v = fill_vector(array, sizeof(array));

	std::cout << "Array = " <<(sizeof(array)/(sizeof(int))) << std::endl;
	std::cout << "Vector= " <<(sizeof(v)/(sizeof(int))) << std::endl;
}