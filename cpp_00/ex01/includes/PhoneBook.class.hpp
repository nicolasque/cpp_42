/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 18:51:58 by nquecedo          #+#    #+#             */
/*   Updated: 2025/05/28 17:28:43 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_CLASS_HPP
#define PHONE_BOOK_CLASS_HPP

#include "libraries.hpp"
#include "PhoneBook.class.hpp"

#define MAX_CONTACT 8
class PhoneBook
{
private:
	int contact_count;
	int contact_range;
	Contact* book[MAX_CONTACT];
	Contact *ft_check_index(int index);

	public:
	PhoneBook();
	~PhoneBook();
	void ft_search() const;
	void ft_add_contact();
	void ft_print_all_contacts() const;
};

#endif // PHONE_BOOK_CLASS_HPP