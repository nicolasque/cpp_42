/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 16:37:00 by nquecedo          #+#    #+#             */
/*   Updated: 2025/07/24 18:31:29 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "includes.hpp"

AForm::AForm() : _name("Default form"), _isSigned(false), _gradeBeSigned(150), _gradeBeExecuted(150)
{
}

AForm::AForm(std::string name, int gradeBeSigned, int gradeBeExecuted) :  _name(name), _isSigned(false),
                                                                        _gradeBeSigned(gradeBeSigned), _gradeBeExecuted(gradeBeExecuted)
{
    if (gradeBeSigned > LOWEST_GRADE || gradeBeExecuted > LOWEST_GRADE)
        throw GradeTooLowException();
    if (gradeBeSigned < HIGHEST_GRADE || gradeBeExecuted < HIGHEST_GRADE)
        throw GradeTooHighException();
}

AForm::AForm(const AForm &form) :  _name(form._name), _isSigned(false),
                                _gradeBeSigned(form._gradeBeSigned), _gradeBeExecuted(form._gradeBeExecuted)
{
}

AForm::~AForm()
{
}

AForm &AForm::operator=(const AForm &form)
{
    if (this != &form)
    {
        this->_isSigned = form._isSigned;
    }
    return (*this);
}

std::string AForm::getName() const
{
    return (this->_name);
}

bool AForm::getIsSigned() const
{
    return (this->_isSigned);
}

int AForm::getSingGrade() const
{
    return (this->_gradeBeSigned);
}

int AForm::getExecuteGrade() const
{
    return (this->_gradeBeExecuted);
}

std::ostream &operator<<(std::ostream &os, const AForm &form)
{
    os << form.getName() << ", form signed state: " << (form.getIsSigned() ? "Yes" : "No") << " , sign grade: " << form.getSingGrade() << "" " , execute grade: " << form.getExecuteGrade() << ".";
    return (os);
}

void AForm::beSigned(const Bureaucrat &bureacrat)
{
    if (bureacrat.getGrade() > this->_gradeBeSigned)
        throw GradeTooLowException();
    this->_isSigned = true;
}

void AForm::checkForExecution(const Bureaucrat &bureaucrat)
{
    if (!this->getIsSigned())
        throw FormNotSignedException();
    if (bureaucrat.getGrade() > this->getExecuteGrade())
        throw GradeTooLowException();
}