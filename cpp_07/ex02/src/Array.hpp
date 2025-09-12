/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 20:18:31 by nquecedo          #+#    #+#             */
/*   Updated: 2025/09/12 17:49:57 by nquecedo         ###   ########.fr       */
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
class Array
{
private:
    T *_data;
    unsigned int _size;

public:
    Array() : _data(NULL), _size(0) {};

    Array(unsigned int size) : _data(NULL), _size(size)
    {
        if (size > 0)
            _data = new T[_size]();
    };

    ~Array() { delete[] _data; };

    Array(const Array &oldArray)
    {
        if (oldArray.size() > 0)
        {
            this->_size = oldArray.size();
            this->_data = new T[_size];
            for (unsigned int i = 0; i < _size; i++)
                this->_data[i] = oldArray._data[i];
        }
    };

    Array &operator=(const Array &oldArray)
    {
        if (this != &oldArray)
        {
            delete[] _data;
            _size = oldArray._size;
            if (_size > 0)
            {
                _data = new T[_size];
                for (unsigned int i = 0; i < _size; i++)
                    _data[i] = oldArray._data[i];
            }
            else
            {
                _data = NULL;
            }
        }
        return *this;
    };

    unsigned int size() const { return (_size); }
    class AccessOutOfBoundsException : public std::exception {
        public:
            const char *what() const throw()
            {
                return ("Accesing data out of bounds, check array size. ");
            }
    };

    T& operator[](unsigned int index)
    {
        if (index >= _size)
        {
            throw AccessOutOfBoundsException();
        }
        return (_data[index]);
    }

    const T& operator[](unsigned int index) const
    {
        if (index >= _size)
        {
            throw AccessOutOfBoundsException();
        }
        return (_data[index]);
    }

};
