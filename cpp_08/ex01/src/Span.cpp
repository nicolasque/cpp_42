/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 14:00:08 by nquecedo          #+#    #+#             */
/*   Updated: 2025/12/01 14:38:13 by nquecedo         ###   ########.fr       */
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
	if (_size < _v.size() + size)
		throw std::invalid_argument("Tryng to add int to a full Span");
	for (int i = 0; i < size; i++)
		this->addNumber(arr[i]);
}

std::vector<int> Span::getVector()
{
	return (_v);
}

int Span::getSize()
{
	return (_size);
}


int Span::shortestSpan()
{
	int span;
	std::vector<int> shorted_vector;

	if (_v.size() < 2)
		throw std::logic_error("Not enough elements to find a span");

	shorted_vector = this->_v;
	std::sort(shorted_vector.begin(), shorted_vector.end());
	span = std::abs(*shorted_vector.begin() - shorted_vector.back());

	for (std::vector<int>::const_iterator it = shorted_vector.begin(); (it
				+ 1) != shorted_vector.end(); ++it)
	{
		if (abs(*it - *(it + 1)) < span)
		{
			span = abs(*it - *(it + 1));
		}
	}

	return (span);
}

int Span::longestSpan()
{
	int span;
	std::vector<int> shorted_vector;

	if (_v.size() < 2)
		throw std::logic_error("Not enough elements to find a span");

	shorted_vector = this->_v;
	std::sort(shorted_vector.begin(), shorted_vector.end());
	span = std::abs(*shorted_vector.begin() - shorted_vector.back());

	return (span);
}