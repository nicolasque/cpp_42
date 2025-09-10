/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 21:07:29 by nquecedo          #+#    #+#             */
/*   Updated: 2025/09/10 21:13:28 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "includes.hpp"

class Base
{
public:
    virtual ~Base() {};
};

class A : public Base
{
};

class B : public Base
{
};

class C : public Base
{
};
