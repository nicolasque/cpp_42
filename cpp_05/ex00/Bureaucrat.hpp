/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 00:57:12 by nquecedo          #+#    #+#             */
/*   Updated: 2025/07/22 15:53:41 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>

#pragma once

#define HIGHEST_GRADE 1
#define LOWEST_GRADE 150

class Bureaucrat
{
private:
    std::string _name;
    int _range;
    class GradeTooHighException;
    class GradeTooLowException;

public:
    Bureaucrat();
    Bureaucrat(std::string name, int range);
    Bureaucrat(const Bureaucrat &bureaucrat);
    Bureaucrat &operator=(const Bureaucrat &bureaucrat);

    std::string getName();
    int getRange();
    void incrementGrade();
    void decreaseRange();
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);

class GradeTooHighException : public std::exception
{
public:
    const char *what() const noexcept override
    {
        return ("Grade is too high! (maximun is 1)");
    }
};

class GradeTooLowException : public std::exception
{
public:
    const char *what() const noexcept override
    {
        return ("Grade is too low! (minimum is 150)");
    }
};
