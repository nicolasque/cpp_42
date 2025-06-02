/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 17:14:24 by nquecedo          #+#    #+#             */
/*   Updated: 2025/06/02 19:13:11 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libraries.hpp"

class File
{
	private:
		const std::string _file_name;
		const std::string _s1;
		const std::string _s2;
		std::string content;

	public:
		File(std::string file_name, std::string s1, std::string s2);
		~File();
		void setContent();
		std::string getContent();
		std::string replace();
};
