/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 21:48:17 by nquecedo          #+#    #+#             */
/*   Updated: 2025/11/11 18:37:05 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	int array[] = {1, 2, 3, 4 ,5};
	std::vector<int> v = fill_container<std::vector<int> >(array, (sizeof(array)/(sizeof(int))));
	std::deque<int> deq = fill_container<std::deque<int> >(array, (sizeof(array)/(sizeof(int))));
	std::list<int> list = fill_container<std::list<int> >(array, (sizeof(array)/(sizeof(int))));

	try {
		std::cout << "Vector= " << *easyfind(v, 2) << std::endl;
		std::cout << "deque= " << *easyfind(deq, 1) << std::endl;
		std::cout << "list= " << *easyfind(list, 5) << std::endl;

		//ERROR

		std::cout << "list= " << *easyfind(list, 6) << std::endl;
		
	} catch (const std::invalid_argument& ia)
	{
		std::cout << "Exception caugth: "<< ia.what() << std::endl;
	}
}