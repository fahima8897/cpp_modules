/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 15:59:02 by fboumell          #+#    #+#             */
/*   Updated: 2023/03/06 12:27:12 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    if (ac == 1)
        std::cout << "Error" << std::endl;
    else
    {
        for (int i = 1; i < ac; i++)
        {
            std::string str = av[i];
            for (size_t i = 0; i < str.size(); i++)
            {
                if (str[i] == '+')
                    i++;
                if (!isdigit(str[i]))
                {
                    std::cout << "Error" << std::endl;
                    return 0;
                }
            }
        }
    }
    return 0;
}