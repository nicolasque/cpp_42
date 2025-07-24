/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 21:56:25 by nquecedo          #+#    #+#             */
/*   Updated: 2025/07/24 21:57:54 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "includes.hpp"

class RobotomyRequestForm : public AForm
{
private:
    const std::string _target;
    RobotomyRequestForm();
    RobotomyRequestForm &operator=(const RobotomyRequestForm &form);

public:
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(const RobotomyRequestForm &form);
    ~RobotomyRequestForm();

    std::string getTarget() const;
    virtual bool execute(const Bureaucrat &bureaucrat) const;
};
