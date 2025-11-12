/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 14:00:08 by nquecedo          #+#    #+#             */
/*   Updated: 2025/11/12 18:33:13 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void Span::addNumber(int nbr)
{
	if (_size <= _v.size())
		throw std::invalid_argument("Tryng to add int to a full Span");
	_v.push_back(nbr);
}

void Span::addBatch(int *arr, int size)
{
	if (_size <= _v.size() + size)
		throw std::invalid_argument("Tryng to add int to a full Span");
	for (int i = 0; i < size; i++)
		this->addNumber(arr[i]);
}

std::vector <int> Span::getVector()
{
	return (_v);
}

int Span::getSize()
{
	return (_size);
}

// int Span::shortestSpan()
// {
	
// }