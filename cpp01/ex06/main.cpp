/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 16:56:31 by fboumell          #+#    #+#             */
/*   Updated: 2022/06/27 14:26:22 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
    Harl    level;
    
    if (ac != 2)
    {
        std::cout << "[ Wrong number of arguments! Try again ]" << std::endl;
        return (1);
    }
    level.complain(av[1]);
    return (0);
}