/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 18:25:20 by fboumell          #+#    #+#             */
/*   Updated: 2022/09/28 10:33:48 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP

#include <iomanip>
#include <iostream>
#include <cstdlib>
#include <stdint.h>

typedef struct s_data
{
    int     i;
    char    c;
} Data;

uintptr_t serialize(Data *ptr);
Data    *deserialize(uintptr_t raw);

#endif