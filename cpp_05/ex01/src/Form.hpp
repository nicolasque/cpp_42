/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 11:19:58 by nquecedo          #+#    #+#             */
/*   Updated: 2025/07/23 11:23:20 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#pragma once

class Form
{
    private:
        const std::string _name;
        bool        _isSigned;
        const int   _gradeBeSigned;
        const int   _gradeBeExecuted;
};