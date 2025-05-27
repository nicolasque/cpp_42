/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 18:51:55 by nquecedo          #+#    #+#             */
/*   Updated: 2025/05/28 00:41:30 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP

#include "libraries.hpp"
class Contact
{
private:
	std::string _first_name;
	std::string _second_name;
	std::string _nickname;
	std::string _darkest_secret;
	std::string _phone_number;
	int 		_index;

public:
	Contact();
	Contact(Contact const &src);
	~Contact();
	void ft_print_all();
	void ft_add_index(int index);
};

#endif // CONTACT_CLASS_HPP