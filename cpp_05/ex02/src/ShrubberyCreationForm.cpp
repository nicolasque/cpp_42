/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 17:40:59 by nquecedo          #+#    #+#             */
/*   Updated: 2025/07/24 21:36:07 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &form) : AForm("ShrubberyCreationForm", 145, 137), _target(form._target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

std::string ShrubberyCreationForm::getTarget() const { return (this->_target); }

bool ShrubberyCreationForm::execute(const Bureaucrat &bureaucrat) const
{
    this->checkForExecution(bureaucrat);

    std::string outfileName = this->getTarget() + "_shrubbery";
    std::string tree = "              ,@@@@@@@,\n"
        "      ,,,.   ,@@@@@@/@@,  .oo8888o.\n"
        "   ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n"
        "  ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n"
        "  %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n"
        "  %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n"
        "  `&%\\ ` /%&'    |.|        \\ '|8'\n"
        "      |o|        | |         | |\n"
        "      |.|        | |         | |\n"
        "jgs \\\\/ ._\\//_/__/  ,\\_//__\\\\.  \\_//__/_\n";
    std::ofstream outfile(outfileName.c_str());
    if (!outfile)
    {
        std::cout << "Error writing to file" << std::endl;
        return (false);
    }
    outfile << tree;
    return (true);
}
