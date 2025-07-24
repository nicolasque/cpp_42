/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 00:57:12 by nquecedo          #+#    #+#             */
/*   Updated: 2025/07/24 21:37:00 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.hpp"
#pragma once

#define HIGHEST_GRADE 1
#define LOWEST_GRADE 150

class Bureaucrat
{
private:
    const std::string _name;
    int _grade;

    public:
    Bureaucrat();
    Bureaucrat(std::string name, int range);
    Bureaucrat(const Bureaucrat &bureaucrat);
    ~Bureaucrat();
    Bureaucrat &operator=(const Bureaucrat &bureaucrat);

    std::string getName() const;
    int getGrade() const;

    void incrementGrade();
    void decreaseGrade();

    void signForm(AForm &form);
    void executeForm(AForm &form);

    class GradeTooHighException : public std::exception
    {
    public:
        const char *what() const throw()
        {
            return ("Bureaucrat: Grade is too high! (maximun is 1)");
        }
    };

    class GradeTooLowException : public std::exception
    {
    public:
        const char *what() const throw()
        {
            return ("Bureaucrat: Grade is too low! (minimum is 150)");
        }
    };
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);


