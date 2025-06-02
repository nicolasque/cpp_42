/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 17:14:37 by nquecedo          #+#    #+#             */
/*   Updated: 2025/06/03 00:35:39 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.class.hpp"

File::File(std::string file_name, std::string s1, std::string s2) : _file_name(file_name), _s1(s1), _s2(s2)
{

}

File::~File()
{
	std::cout << "File destructor has been called" << std::endl;
}

void File::setContent()
{
	std::ifstream ReadFile(this->_file_name.c_str());
	char c;
	this->content = "";
	while (ReadFile.get(c))
		this->content += c;
}

std::string File::getContent()
{
	return (this->content);
}

size_t File::replace(size_t pos)
{
	pos = this->content.find(this->_s1);
	if (pos == std::string::npos)
		return (0);
	this->content.erase(pos, this->_s1.length());
	this->content.insert(pos, this->_s2);
	replace(pos);
	return (pos);
}

void File::writeNewFile()
{
	std::string outfile_name;

    outfile_name = this->_file_name + ".replace";
	std::ofstream outfile(outfile_name.c_str());
	if (!outfile)
	{
		std::cout << "Error writing to file" << std::endl;
		exit(EXIT_FAILURE);
	}
	outfile << this->content;
}