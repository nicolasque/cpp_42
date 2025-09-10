/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 18:08:25 by nquecedo          #+#    #+#             */
/*   Updated: 2025/09/10 20:23:54 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "includes.hpp"

struct Data
{
    int dataInt;
    std::string str;
};

class Serializer
{
private:
    Serializer();
    ~Serializer();
    Serializer(const Serializer &Serializer);
    Serializer &operator=(const Serializer &Serializer);

public:
    static intptr_t serialize(Data* ptr);
    static Data* deserialize(intptr_t raw);
};
