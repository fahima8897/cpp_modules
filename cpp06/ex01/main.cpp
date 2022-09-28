/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 18:25:08 by fboumell          #+#    #+#             */
/*   Updated: 2022/09/28 11:19:56 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

int main()
{
    Data   data;

    data.c = 'a';
    data.i = 42;

    std::cout << "Before Serialization c = " << data.c << std::endl;
    std::cout << "Before Serialization i = " << data.i << std::endl;

    uintptr_t raw = serialize(&data);
	Data *new_data = deserialize(raw);
    std::cout << std::endl;
    
    std::cout << "After Serialization c = " << new_data->c << std::endl;
    std::cout << "After Serialization i = " << new_data->i << std::endl;
    
    return 0;
}
