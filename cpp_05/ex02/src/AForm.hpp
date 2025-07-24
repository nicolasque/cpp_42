/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 16:37:05 by nquecedo          #+#    #+#             */
/*   Updated: 2025/07/24 21:11:39 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "includes.hpp"

class AForm
{
private:
    const std::string _name;
    bool _isSigned;
    const int _gradeBeSigned;
    const int _gradeBeExecuted;

    public:
    AForm();
    AForm(std::string name, int gradeBeSigned, int gradeBeExecuted);
    AForm(const AForm &form);
    ~AForm();
    AForm &operator=(const AForm &form);
    
    std::string getName() const;
    bool getIsSigned() const;
    int getSingGrade() const;
    int getExecuteGrade() const;
    
    void beSigned(const Bureaucrat &bureaucrat);
    void checkForExecution(const Bureaucrat &bureaucrat);
    virtual void execute(const Bureaucrat &bureaucrat) = 0;

    class GradeTooHighException : public std::exception
    {
    public:
        const char *what() const throw()
        {
            return ("AForm: Grade is too high! (maximun is 1)");
        }
    };

    class GradeTooLowException : public std::exception
    {
    public:
        const char *what() const throw()
        {
            return ("AForm: Grade is too low! (minimum is 150)");
        }
    };

    class FormNotSignedException : public std::exception
    {
        public:
            const char *what() const throw()
            {
                return ("AForm: Form has not been signed.");
            }
    };
};

std::ostream &operator<<(std::ostream &os, const AForm &form);
