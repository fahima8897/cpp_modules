/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 18:25:16 by fboumell          #+#    #+#             */
/*   Updated: 2022/09/27 18:41:11 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

uintptr_t serialize(Data *ptr)
{
    uintptr_t   dataSerialize;
    
    dataSerialize = reinterpret_cast<uintptr_t>(ptr);
    return (dataSerialize);
}

Data *deserialize(uintptr_t raw)
{
    Data    *rawDeserialize;

    rawDeserialize = reinterpret_cast<Data*>(raw);
    return (rawDeserialize);
}