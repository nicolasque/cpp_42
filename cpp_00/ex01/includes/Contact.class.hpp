/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 18:51:55 by nquecedo          #+#    #+#             */
/*   Updated: 2025/05/27 22:08:15 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP

#include <string>
#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>
#include <sstream>

class Contact
{
private:
	std::string _first_name;
	std::string _second_name;
	std::string _nickname;
	std::string _darkest_secret;
	std::string _phone_number;

public:
	Contact();
	Contact(Contact const &src);
	Contact &operator=(Contact const &rhs);
	~Contact();
};


#endif //CONTACT_CLASS_HPP