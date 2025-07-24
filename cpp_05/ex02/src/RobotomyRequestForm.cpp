/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 21:56:09 by nquecedo          #+#    #+#             */
/*   Updated: 2025/07/24 22:10:11 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "includes.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &form) : AForm("RobotomyRequestForm", 145, 137), _target(form._target)
{
}

RobotomyRequestForm::~RobotomyRequestForm() {}

std::string RobotomyRequestForm::getTarget() const { return (this->_target); }

bool RobotomyRequestForm::execute(const Bureaucrat &bureaucrat) const
{
    this->checkForExecution(bureaucrat);

    std::cout << "RRRRRRRRRRRR...." << std::endl;
    sleep(1);
    std::cout << "prprprprprprppr........" << std::endl;
    sleep(1);
    std::cout << "RRRRRRRRRRRRR........" << std::endl;
    sleep(2);
    srand(time(NULL));
    if (rand() % 2 ==0)
        std::cout << this->getTarget() << " has been suscesfully robotomice. " << std::endl;
    else
        std::cout << this->getTarget() << " has been a problem with robotomization. " << std::endl;
    return (true);
}
