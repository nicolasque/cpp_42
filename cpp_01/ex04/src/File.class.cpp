/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 17:14:37 by nquecedo          #+#    #+#             */
/*   Updated: 2025/06/02 19:16:52 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.class.hpp"

File::File(std::string file_name, std::string s1, std::string s2) : _file_name(file_name), _s1(s1), _s2(s2)
{
	std::cout << "File constructor has been called: " << std::endl
			<< "File name: " << this->_file_name << std::endl
			<< "s1: " << this->_s1 << std::endl
			<< "s2: " << this->_s2 << std::endl
			<< "==================================================" <<  std::endl;

}

File::~File()
{
	std::cout << "File destructor has been called" << std::endl;
}

void File::setContent()
{
	std::ifstream ReadFile(this->_file_name.c_str());
	while (std::getline(ReadFile, this->content));
}

std::string File::getContent()
{
	return (this->content);
}