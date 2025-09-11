/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 19:18:58 by nquecedo          #+#    #+#             */
/*   Updated: 2025/09/11 19:36:16 by nquecedo         ###   ########.fr       */
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


template<class T, class Func>
void iter(T* arr, size_t length, Func func)
{
    for (size_t i = 0; i < length; i++)
        func(arr[i]);
}

