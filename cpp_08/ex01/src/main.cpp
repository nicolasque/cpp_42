/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 21:48:17 by nquecedo          #+#    #+#             */
/*   Updated: 2025/11/12 18:34:15 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span s(5);
	int arr[5] = {1, 2, 3, 4,5};
	std::vector <int> vecto;

	try {
		s.addBatch(arr, 5);

		vecto = s.getVector();

		
		
	} catch (const std::invalid_argument& ia)
	{
		std::cout << "Exception caugth: "<< ia.what() << std::endl;
	}
}