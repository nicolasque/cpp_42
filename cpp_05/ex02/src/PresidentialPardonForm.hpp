/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 22:13:11 by nquecedo          #+#    #+#             */
/*   Updated: 2025/07/24 22:13:34 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "includes.hpp"

class PresidentialPardonForm : public AForm
{
private:
    const std::string _target;
    PresidentialPardonForm();
    PresidentialPardonForm &operator=(const PresidentialPardonForm &form);

public:
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(const PresidentialPardonForm &form);
    ~PresidentialPardonForm();

    std::string getTarget() const;
    virtual bool execute(const Bureaucrat &bureaucrat) const;
};