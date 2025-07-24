/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 11:19:55 by nquecedo          #+#    #+#             */
/*   Updated: 2025/07/24 14:21:02 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.hpp"

Form::Form() : _name("Default form"), _isSigned(false), _gradeBeSigned(150), _gradeBeExecuted(150)
{
}

Form::Form(std::string name, int gradeBeSigned, int gradeBeExecuted) :  _name(name), _isSigned(false),
                                                                        _gradeBeSigned(gradeBeSigned), _gradeBeExecuted(gradeBeExecuted)
{
    if (gradeBeSigned > LOWEST_GRADE || gradeBeExecuted > LOWEST_GRADE)
        throw GradeTooLowException();
    if (gradeBeSigned < HIGHEST_GRADE || gradeBeExecuted < HIGHEST_GRADE)
        throw GradeTooHighException();
}

Form::Form(const Form &form) :  _name(form._name), _isSigned(false),
                                _gradeBeSigned(form._gradeBeSigned), _gradeBeExecuted(form._gradeBeExecuted)
{
}

Form::~Form()
{
}

Form &Form::operator=(const Form &form)
{
    if (this != &form)
    {
        this->_isSigned = form._isSigned;
    }
    return (*this);
}

std::string Form::getName() const
{
    return (this->_name);
}

bool Form::getIsSigned() const
{
    return (this->_isSigned);
}

int Form::getSingGrade() const
{
    return (this->_gradeBeSigned);
}

int Form::getExecuteGrade() const
{
    return (this->_gradeBeExecuted);
}

std::ostream &operator<<(std::ostream &os, const Form &form)
{
    os << form.getName() << ", form signed state: " << (form.getIsSigned() ? "Yes" : "No") << " , sign grade: " << form.getSingGrade() << "" " , execute grade: " << form.getExecuteGrade() << ".";
    return (os);
}

void Form::beSigned(const Bureaucrat &bureacrat)
{
    if (bureacrat.getGrade() > this->_gradeBeSigned)
        throw GradeTooLowException();
    this->_isSigned = true;
}
