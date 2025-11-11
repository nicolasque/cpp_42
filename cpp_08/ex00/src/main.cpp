/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 21:48:17 by nquecedo          #+#    #+#             */
/*   Updated: 2025/11/11 16:28:04 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	int array[] = {1, 2, 3, 4 ,5};
	std::vector<int> v = fill_vector<std::vector<int> >(array, (sizeof(array)/(sizeof(int))));
	std::deque<int> deq = fill_vector<std::deque<int> >(array, (sizeof(array)/(sizeof(int))));
	std::list<int> list = fill_vector<std::list<int> >(array, (sizeof(array)/(sizeof(int))));

	std::cout << "Array = " <<(sizeof(array)/(sizeof(int))) << std::endl;
	std::cout << "Vector= " << v.size() << std::endl;
	std::cout << "deque= " << deq.size() << std::endl;
	std::cout << "list= " << list.size() << std::endl;
}