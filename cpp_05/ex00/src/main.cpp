/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 00:56:21 by nquecedo          #+#    #+#             */
/*   Updated: 2025/07/24 23:12:44 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


//ALL GOOD EXECUTION
int main(void)
{
    try
    {
        Bureaucrat nico("nico", 100);
        std::cout << nico;
        for (int i = 0; i < 20; i++)
        {
            nico.incrementGrade();
            std::cout << nico;
        }
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return (0);
}


// //GRADE TO HI
// int main(void)
// {
//     try
//     {
//         Bureaucrat nico("nico", 20);
//         std::cout << nico;
//         for (int i = 0; i < 33; i++)
//         {
//             nico.incrementGrade();
//             std::cout << nico;
//         }
//     }
//     catch (const Bureaucrat::GradeTooHighException &e)
//     {
//         std::cerr << "Exception caught: " << e.what() << std::endl;
//     }
//     catch (const Bureaucrat::GradeTooLowException &e)
//     {
//         std::cerr << "Exception caught: " << e.what() << std::endl;
//     }
//     return (0);
// }

//GRADE TO LOW
// int main(void)
// {
//     try
//     {
//         Bureaucrat nico("nico", 120);
//         std::cout << nico;
//         for (int i = 0; i < 33; i++)
//         {
//             nico.decreaseGrade();
//             std::cout << nico;
//         }
//     }
//     catch (const Bureaucrat::GradeTooHighException &e)
//     {
//         std::cerr << "Exception caught: " << e.what() << std::endl;
//     }
//     catch (const Bureaucrat::GradeTooLowException &e)
//     {
//         std::cerr << "Exception caught: " << e.what() << std::endl;
//     }
//     return (0);
// }

// //GRADE INSTANCIATE TO HI
// int main(void)
// {
//     try
//     {
//         Bureaucrat nico("nico", 0);
//         std::cout << nico;
//         for (int i = 0; i < 33; i++)
//         {
//             nico.incrementGrade();
//             std::cout << nico;
//         }
//     }
//     catch (const Bureaucrat::GradeTooHighException &e)
//     {
//         std::cerr << "Exception caught: " << e.what() << std::endl;
//     }
//     catch (const Bureaucrat::GradeTooLowException &e)
//     {
//         std::cerr << "Exception caught: " << e.what() << std::endl;
//     }
//     return (0);
// }

// //GRADE INSTANCIATE TO LOW
// int main(void)
// {
//     try
//     {
//         // // Bureaucrat nico2("nico2", 149);
//         // // std::cout << nico2;
//         Bureaucrat nico("nico", 151);
//         std::cout << nico;
//         for (int i = 0; i < 33; i++)
//         {
//             nico.decreaseGrade();
//             std::cout << nico;
//         }
//     }
//     catch (const Bureaucrat::GradeTooHighException &e)
//     {
//         std::cerr << "Exception caught: " << e.what() << std::endl;
//     }
//     catch (const Bureaucrat::GradeTooLowException &e)
//     {
//         std::cerr << "Exception caught: " << e.what() << std::endl;
//     }
//     return (0);
// }
