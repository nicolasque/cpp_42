/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 18:08:25 by nquecedo          #+#    #+#             */
/*   Updated: 2025/09/05 16:03:57 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "includes.hpp"

struct Data
{
    int dataInt;
    char *str;
};

class Serializer
{
private:
    Serializer();
    ~Serializer();
    Serializer(const Serializer &Serializer);
    Serializer &operator=(const Serializer &Serializer);

public:
    static uintptr_t serialize(Data* ptr);
    Data* deserialize(uintptr_t raw);
};
