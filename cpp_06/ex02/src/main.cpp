/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 23:29:08 by nquecedo          #+#    #+#             */
/*   Updated: 2025/09/10 21:44:17 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.hpp"

Base *generate()
{
    srand(time(NULL));
    int randomNbr = rand() % 3 + 1;
    if (randomNbr == 1)
    {
        std::cout << "A pointer has been generated" << std::endl;
        return (new A);
    }
    else if (randomNbr == 2)
    {
        std::cout << "B pointer has been generated" << std::endl;
        return (new B);
    }
    else
    {
        std::cout << "C pointer has been generated" << std::endl;
        return (new C);
    }
}

void identify(Base *p)
{
    if (dynamic_cast<A *>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B *>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C *>(p))
        std::cout << "C" << std::endl;
    else
        std::cout << "Unknown type" << std::endl;
}

void identify(Base &p)
{
    try
    {
        (void)dynamic_cast<A &>(p);
        std::cout << "A" << std::endl;
        return;
    }
    catch (std::bad_cast &)
    {
    }

    try
    {
        (void)dynamic_cast<B &>(p);
        std::cout << "B" << std::endl;
        return;
    }
    catch (std::bad_cast &)
    {
    }

    try
    {
        (void)dynamic_cast<C &>(p);
        std::cout << "C" << std::endl;
        return;
    }
    catch (std::bad_cast &)
    {
    }

    std::cout << "Unknown type" << std::endl;
}

int main()
{
    Base* ptr = generate();
    std::cout << "Identified with ptr: " << std::endl;
    identify(ptr);
    std::cout << "Identified with reference: " << std::endl;
    identify(*ptr);
    delete ptr;
    return (0);
}
