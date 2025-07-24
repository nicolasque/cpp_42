/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 22:38:30 by nquecedo          #+#    #+#             */
/*   Updated: 2025/07/24 23:25:17 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.hpp"

Intern::Intern() {}

Intern::~Intern() {}

Intern::Intern(const Intern &inter) {*this = inter;}

Intern &Intern::operator=(const Intern &intern) { (void)intern; return (*this); }

AForm *Intern::makeForm(std::string formName, std::string target)
{
    std::string forms[] = {"shrubbery request", "robotomy request", "presidential pardon"};
    int form_nbr = 0;
    while (form_nbr < 3)
    {
        if (!forms[form_nbr].compare(formName))
            break;
        form_nbr++;
    }
    switch (form_nbr)
    {
    case 0:
        return (new ShrubberyCreationForm(target));
    case 1:
        return (new RobotomyRequestForm(target));
    case 2:
        return (new PresidentialPardonForm(target));
    default:
        throw std::runtime_error("Form not found");
    }
}
