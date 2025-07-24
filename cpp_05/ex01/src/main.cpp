/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 00:56:21 by nquecedo          #+#    #+#             */
/*   Updated: 2025/07/24 23:12:58 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.hpp"

// ALL GOOD EXECUTION
int main(void)
{
    try
    {
        Bureaucrat IRSagent("Mc douglas", 10);
        Bureaucrat averageAciendaAgent("Jose migel do santos", 100);

        Form taxException("Exclusive tax exception", 12, 5);
        Form q1Tax("Q1 tax", 101, 55);

        std::cout << IRSagent << std::endl;
        std::cout << averageAciendaAgent << std::endl;
        std::cout << std::endl;

        std::cout << taxException << std::endl;
        std::cout << q1Tax << std::endl;

        std::cout << "===============================================" << std::endl;

        averageAciendaAgent.signForm(taxException);
        IRSagent.signForm(taxException);
        averageAciendaAgent.signForm(q1Tax);

        std::cout << "===============================================" << std::endl;

        std::cout << taxException << std::endl;
        std::cout << q1Tax << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return (0);
}


// ALL BAD EXECUTION
// int main(void)
// {
//     try
//     {
//         Bureaucrat IRSagent("Mc douglas", 0);
//         Bureaucrat averageAciendaAgent("Jose migel do santos", 190);

//         std::cout << IRSagent << std::endl;
//         std::cout << averageAciendaAgent << std::endl;
//         std::cout << std::endl;

//         Form taxException("Exclusive tax exception", 1, 0);
//         Form q1Tax("Q1 tax", 9, 155);


//         std::cout << taxException << std::endl;
//         std::cout << q1Tax << std::endl;

//         std::cout << "===============================================" << std::endl;

//         //No exceptions here
//         averageAciendaAgent.signForm(taxException);
//         IRSagent.signForm(taxException);
//         averageAciendaAgent.signForm(q1Tax);

//         std::cout << "===============================================" << std::endl;

//         std::cout << taxException << std::endl;
//         std::cout << q1Tax << std::endl;

//         std::cout << "===============================================" << std::endl;
//         // Form sign with low grade bureaucrat exception
//         taxException.beSigned(averageAciendaAgent);
//     }
//     catch (const Bureaucrat::GradeTooHighException &e)
//     {
//         std::cerr << "Exception caught: " << e.what() << std::endl;
//     }
//     catch (const Bureaucrat::GradeTooLowException &e)
//     {
//         std::cerr << "Exception caught: " << e.what() << std::endl;
//     }
//     catch (const Form::GradeTooHighException &e)
//     {
//         std::cerr << "Exception caught: " << e.what() << std::endl;
//     }
//     catch (const Form::GradeTooLowException &e)
//     {
//         std::cerr << "Exception caught: " << e.what() << std::endl;
//     }
//     return (0);
// }
