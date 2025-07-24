/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 00:56:21 by nquecedo          #+#    #+#             */
/*   Updated: 2025/07/24 21:32:01 by nquecedo         ###   ########.fr       */
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
        ShrubberyCreationForm executableTry("try");
        IRSagent.signForm(executableTry);
        executableTry.execute(IRSagent);

    }
    catch (const Bureaucrat::GradeTooHighException &e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    catch (const Bureaucrat::GradeTooLowException &e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    catch (const AForm::GradeTooHighException &e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    catch (const AForm::GradeTooLowException &e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    catch (const AForm::FormNotSignedException &e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    return (0);
}

