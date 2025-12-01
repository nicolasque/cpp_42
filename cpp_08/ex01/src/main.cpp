/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 21:48:17 by nquecedo          #+#    #+#             */
/*   Updated: 2025/12/01 14:39:34 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span s(5);
	int arr[5] = {33, 1, 87, 121, 122};
	std::vector <int> vector;

	try {
		s.addBatch(arr, 5);

		vector = s.getVector();

		for (unsigned int i = 0; i < vector.size(); i++)
		{
			std::cout << vector.at(i) << " ";
		}
		std::cout << std::endl;

		std::cout  << "Shortest span: " << (s.shortestSpan()) << std::endl;
		std::cout  << "LOngest span: " << (s.longestSpan()) << std::endl;


	} catch (const std::invalid_argument& ia)
	{
		std::cout << "Exception caugth: "<< ia.what() << std::endl;
	}
}

