/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 13:58:39 by fboumell          #+#    #+#             */
/*   Updated: 2023/03/23 13:51:13 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
    
    if (ac != 2)
        std::cout << "Error\n";
    else
    {
        std::string str = av[1];
        if (str.find_first_not_of("0123456789/*-+ ") != std::string::npos)
        {
            std::cout << "Error" << std::endl;
            return 1;
        }
        RPN stack = RPN();
        if (!stack.checkvalidity(str))
        {
            std::cout << "Error : incorrect operators number" << std::endl;
            return 1;
        }
        if (stack.calcul(str) == true)
        {
            if(!stack.getStack().empty())
                std::cout << stack.getStack().top() << std::endl;
        }
        // if (!stack.getStack().empty() && stack.getStack().size() != 1)
        // {
        //     std::cout << "Error" << std::endl;
        //     return 1;
        // }
    }
    return 0;
}