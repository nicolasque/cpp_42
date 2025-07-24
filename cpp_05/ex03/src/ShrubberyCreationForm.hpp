/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 17:28:19 by nquecedo          #+#    #+#             */
/*   Updated: 2025/07/24 21:35:57 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "includes.hpp"

class ShrubberyCreationForm : public AForm
{
private:
    const std::string _target;
    ShrubberyCreationForm();
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &form);

public:
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(const ShrubberyCreationForm &form);
    ~ShrubberyCreationForm();

    std::string getTarget() const;
    virtual bool execute(const Bureaucrat &bureaucrat) const;
};
