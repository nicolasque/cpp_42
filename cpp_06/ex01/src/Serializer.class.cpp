/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 18:08:29 by nquecedo          #+#    #+#             */
/*   Updated: 2025/09/10 20:24:13 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.hpp"

intptr_t Serializer::serialize(Data* ptr)
{
    return (reinterpret_cast<intptr_t>(ptr));
}

Data* Serializer::deserialize(intptr_t raw)
{
    return (reinterpret_cast<Data*>(raw));
}
