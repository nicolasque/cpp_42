/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 17:37:11 by nquecedo          #+#    #+#             */
/*   Updated: 2025/09/11 19:16:26 by nquecedo         ###   ########.fr       */
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

template <class T>
void swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

template <class T>
T min(T a, T b)
{
    if (a >= b)
        return (b);
    return (a);
}

template <class T>
T max(T a, T b)
{
    if (b >= a)
        return (b);
    return (a);
}
