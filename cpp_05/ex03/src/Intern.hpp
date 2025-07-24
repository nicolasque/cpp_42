/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 22:38:27 by nquecedo          #+#    #+#             */
/*   Updated: 2025/07/24 23:12:01 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "includes.hpp"

class Intern
{
private:
public:
    Intern();
    ~Intern();
    Intern(const Intern &intern);
    Intern &operator=(const Intern &intern);

    AForm *makeForm(std::string formName, std::string target);
};
