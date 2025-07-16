/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 00:57:12 by nquecedo          #+#    #+#             */
/*   Updated: 2025/07/17 01:09:25 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cctype>
#include <sstream>

#pragma once

class Bureaucrat {
    private:
        std::string _name;
        int _range;

    public:
        Bureaucrat();
        Bureaucrat(std::string name, int range);
        Bureaucrat(const Bureaucrat& bureaucrat);
        Bureaucrat &operator=(const Bureaucrat& bureaucrat);

        std::string& operator<<(std::ostream& os);
};
