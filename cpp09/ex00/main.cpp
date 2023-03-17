/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 13:56:43 by fboumell          #+#    #+#             */
/*   Updated: 2023/03/17 15:24:59 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <fstream>
#include <iostream>

int main(int ac, char **av)
{
    
    if (ac != 2)
        std::cout << "Error: could not open file." << std::endl;
    else 
    {
        std::ifstream file;
        file.open(av[1]);
        if (file.good())
        {
            BitcoinExchange data = BitcoinExchange();
            data.fillMap();
            // std::cout << "Hi i am open" << std::endl;
        }
        else
            std::cout << "Error: could not open file." << std::endl;
        file.close();
    }
    return 0;
}