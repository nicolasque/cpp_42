/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 00:57:15 by nquecedo          #+#    #+#             */
/*   Updated: 2025/07/23 11:11:54 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default Bureaucrat"), _grade(LOWEST_GRADE)
{
}

Bureaucrat::Bureaucrat(std::string name, int range) : _name(name)
{
    if (range > LOWEST_GRADE)
        throw GradeTooLowException();
    if (range < HIGHEST_GRADE)
        throw GradeTooHighException();
    this->_grade = range;
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat)
    : _name(bureaucrat._name), _grade(bureaucrat._grade)
{
}

Bureaucrat::~Bureaucrat()
{}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &bureaucrat)
{
    if (this != &bureaucrat)
    {
        this->_grade = bureaucrat._grade;
    }
    return (*this);
}

std::string Bureaucrat::getName() const
{
    return (this->_name);
}

int Bureaucrat::getGrade() const
{
    return (this->_grade);
}

void Bureaucrat::incrementGrade()
{
    if ((this->_grade - 1) < HIGHEST_GRADE)
        throw GradeTooHighException();
    this->_grade --;
}

void Bureaucrat::decreaseGrade()
{
    if ((this->_grade + 1) > LOWEST_GRADE)
    throw GradeTooLowException();
this->_grade ++;
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureacrat)
{
    os << bureacrat.getName() << ", bureaucrat grade " << bureacrat.getGrade() << "." << std::endl;
    return (os);
}

