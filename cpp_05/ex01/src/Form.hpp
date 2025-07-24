/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 11:19:58 by nquecedo          #+#    #+#             */
/*   Updated: 2025/07/24 14:11:40 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.hpp"
#pragma once

// class Bureaucrat;

class Form
{
private:
    const std::string _name;
    bool _isSigned;
    const int _gradeBeSigned;
    const int _gradeBeExecuted;

    public:
    Form();
    Form(std::string name, int gradeBeSigned, int gradeBeExecuted);
    Form(const Form &form);
    ~Form();
    Form &operator=(const Form &form);

    std::string getName() const;
    bool getIsSigned() const;
    int getSingGrade() const;
    int getExecuteGrade() const;

    void beSigned(const Bureaucrat &bureaucrat);

    class GradeTooHighException : public std::exception
    {
    public:
        const char *what() const throw()
        {
            return ("Form: Grade is too high! (maximun is 1)");
        }
    };

    class GradeTooLowException : public std::exception
    {
    public:
        const char *what() const throw()
        {
            return ("Form: Grade is too low! (minimum is 150)");
        }
    };
};

std::ostream &operator<<(std::ostream &os, const Form &form);
