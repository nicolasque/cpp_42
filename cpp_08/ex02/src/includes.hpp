/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   includes.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 17:37:11 by nquecedo          #+#    #+#             */
/*   Updated: 2025/12/01 16:45:39 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once
#include <cctype>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <unistd.h>
#include <cmath>
#include <limits>
#include <algorithm>
#include <cstring>
#include <algorithm>
#include <typeinfo>
#include <vector>
#include <deque>
#include <list>
#include <stdexcept>
#include <limits>
#include <stack>


// template <class T>
// void swap(T &a, int nbr)
// {
//     T temp = a;
//     a = b;
//     b = temp;
// }

template <class T>
T fill_container(int *arr, int size)
{
	T v;
	for (int i = 0; i < size ; i++)
	{
		v.push_back(arr[i]);
	}
	return v;
};


template <typename T>
typename T::iterator easyfind(T &cont, int nbr)
{
	(void) nbr;
    typename T::iterator it = cont.begin();

	for (; it != cont.end(); it++)
	{
		// std::cout <<  *it << " ";
		if (*it == nbr)
			return it;
	}

	throw std::invalid_argument("nbr not in the conntainer");
};
