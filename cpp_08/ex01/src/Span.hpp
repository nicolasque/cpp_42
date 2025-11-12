/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 14:00:10 by nquecedo          #+#    #+#             */
/*   Updated: 2025/11/12 16:48:55 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.hpp"

class Span {
	private:
		int _size;
		std::vector <int> _v;

	public:
		Span(): _size(0) {};
		Span(int size): _size(size) {};
		Span(const Span& other): _size(other._size), _v(other._v){};
		Span& operator=(const Span& other) {
			if (&other != this)
			{
				_size = other._size;
				_v = other._v;
			}
			return (*this);
		};
		~Span() {};

		
};