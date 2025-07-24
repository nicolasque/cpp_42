/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 00:56:21 by nquecedo          #+#    #+#             */
/*   Updated: 2025/07/24 23:13:13 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.hpp"

// ALL GOOD EXECUTION
int main(void)
{
    try
    {
        Bureaucrat IRSagent("Mc douglas", 5);
        Bureaucrat averageAciendaAgent("Jose migel do santos", 100);
        ShrubberyCreationForm executableTry("try");
        IRSagent.signForm(executableTry);
        IRSagent.executeForm(executableTry);

        RobotomyRequestForm parceRobotomi("Parce");
        IRSagent.signForm(parceRobotomi);
        IRSagent.executeForm(parceRobotomi);
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    return (0);
}

