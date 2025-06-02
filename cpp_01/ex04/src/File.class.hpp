/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 17:14:24 by nquecedo          #+#    #+#             */
/*   Updated: 2025/06/02 20:17:30 by nquecedo         ###   ########.fr       */
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
		size_t replace(size_t pos);
		void writeNewFile();
};
