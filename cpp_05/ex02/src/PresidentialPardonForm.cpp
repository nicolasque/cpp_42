/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 22:12:53 by nquecedo          #+#    #+#             */
/*   Updated: 2025/07/24 22:16:23 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &form) : AForm("PresidentialPardonForm", 145, 137), _target(form._target)
{
}

PresidentialPardonForm::~PresidentialPardonForm() {}

std::string PresidentialPardonForm::getTarget() const { return (this->_target); }

bool PresidentialPardonForm::execute(const Bureaucrat &bureaucrat) const
{
    this->checkForExecution(bureaucrat);
    std::cout << "Congratulations " << this->getTarget() << " you habe been pardoned by Zaphod Beeblebrox. " << "You will get your testicles back at the exit" << std::endl;
    return (true);
}
