/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 00:56:21 by nquecedo          #+#    #+#             */
/*   Updated: 2025/07/24 23:20:22 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.hpp"

int main(void)
{
    try
    {
        std::cout << "=== TESTING INTERN CLASS ===" << std::endl;
        
        Intern intern;
        Bureaucrat boss("The Boss", 1);
        Bureaucrat lowLevel("Low Level", 150);
        
        std::cout << "\n--- Creating forms through Intern ---" << std::endl;
        
        // Test 1: Shrubbery Creation Form
        AForm* shrubbery = intern.makeForm("shrubbery request", "garden");
        std::cout << *shrubbery << std::endl;
        boss.signForm(*shrubbery);
        boss.executeForm(*shrubbery);
        
        std::cout << "\n--- Test 2: Robotomy Request Form ---" << std::endl;
        AForm* robotomy = intern.makeForm("robotomy request", "Bender");
        std::cout << *robotomy << std::endl;
        boss.signForm(*robotomy);
        boss.executeForm(*robotomy);
        
        std::cout << "\n--- Test 3: Presidential Pardon Form ---" << std::endl;
        AForm* pardon = intern.makeForm("presidential pardon", "Criminal");
        std::cout << *pardon << std::endl;
        boss.signForm(*pardon);
        boss.executeForm(*pardon);
        
        std::cout << "\n--- Test 4: Invalid form name ---" << std::endl;
        try {
            AForm* invalid = intern.makeForm("invalid form", "target");
            (void)invalid;
        } catch (const std::exception& e) {
            std::cout << "Exception: " << e.what() << std::endl;
        }
        
        // Clean up
        delete shrubbery;
        delete robotomy;
        delete pardon;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }
    
    return 0;
}

