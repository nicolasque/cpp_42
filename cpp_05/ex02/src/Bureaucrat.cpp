/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 00:57:15 by nquecedo          #+#    #+#             */
/*   Updated: 2025/07/24 21:31:27 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.hpp"

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
    os << bureacrat.getName() << ", bureaucrat grade " << bureacrat.getGrade() << ".";
    return (os);
}

void Bureaucrat::signForm(AForm &form)
{
    if (form.getSingGrade() >= this->getGrade())
    {
        std::cout << this->getName() << " signed " << form.getName() << "." << std::endl;
        form.beSigned(*this);
        return ;
    }
    if (form.getIsSigned())
    {
        std::cout << this->getName() << " couldn't sign " << form.getName() << " because " << "it was already signed." << std::endl;
        return ;
    }
        std::cout << this->getName() << " couldn't sign " << form.getName() << " because " << "bureaucrat grade was too low." << std::endl;
        return ;
}
