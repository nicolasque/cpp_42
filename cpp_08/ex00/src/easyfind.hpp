/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 17:37:11 by nquecedo          #+#    #+#             */
/*   Updated: 2025/11/11 13:25:20 by nquecedo         ###   ########.fr       */
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


// template <class T>
// void swap(T &a, int nbr)
// {
//     T temp = a;
//     a = b;
//     b = temp;
// }

template <class T>
std::vector<int> fill_vector(T &arr, int size)
{
	std::vector<int> v;
	for (int i = 0; i < )
	{
		v.push_back(arr[size]);
	}
	return v;
}