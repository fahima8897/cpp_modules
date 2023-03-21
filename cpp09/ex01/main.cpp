/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 13:58:39 by fboumell          #+#    #+#             */
/*   Updated: 2023/03/21 16:38:17 by fboumell         ###   ########.fr       */
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
        for (size_t i = 0; i < str.size(); i++)
        {
            if (str[i] == '(' or str[i] == ')')
            {
                std::cout << "Error\n";
                return 0;
            }
        }
        RPN stack = RPN();
        if (!stack.checkvalidity(str))
        {
            std::cout << "Error : incorrect operators number" << std::endl;
            return 0;
        }
        stack.calcul(str);
        if(!stack.getStack().empty())
            std::cout << stack.getStack().top() << std::endl;
    }
    return 0;
}