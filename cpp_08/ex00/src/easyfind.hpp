/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 17:37:11 by nquecedo          #+#    #+#             */
/*   Updated: 2025/11/11 16:28:18 by nquecedo         ###   ########.fr       */
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


// template <class T>
// void swap(T &a, int nbr)
// {
//     T temp = a;
//     a = b;
//     b = temp;
// }

template <class T>
T fill_vector(int *arr, int size)
{
	T v;
	for (int i = 0; i < size ; i++)
	{
		v.push_back(arr[i]);
	}
	return v;
}
