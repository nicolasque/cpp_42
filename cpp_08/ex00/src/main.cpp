/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 21:48:17 by nquecedo          #+#    #+#             */
/*   Updated: 2025/11/11 17:52:32 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	int array[] = {1, 2, 3, 4 ,5};
	std::vector<int> v = fill_container<std::vector<int> >(array, (sizeof(array)/(sizeof(int))));
	std::deque<int> deq = fill_container<std::deque<int> >(array, (sizeof(array)/(sizeof(int))));
	std::list<int> list = fill_container<std::list<int> >(array, (sizeof(array)/(sizeof(int))));

	std::cout << "Array = , " <<(sizeof(array)/(sizeof(int))) << std::endl;
	std::cout << "Vector= " << v.size() << std::endl;
	std::cout << "deque= " << deq.size() << std::endl;
	std::cout << "list= " << list.size() << std::endl;

	easyfind(list, 3);

}