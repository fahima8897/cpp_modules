/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 16:37:07 by fboumell          #+#    #+#             */
/*   Updated: 2022/09/28 17:05:21 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

void    convert(char *str)
{
}


int main(int ac, char **av)
{
    std::string str = NULL;;
    
    if (ac == 2)
    {
        str = std::string(av[1]);
        Conversion  toConvert(av[1]);
        
        toConvert.ConvertInt();
        toConvert.ConvertChar();
        toConvert.ConvertFloat();
        toConvert.ConvertDouble();
    }
    else
    {
        std::cout << "Wrong number of arguments" << std::endl;
        return (1);
    }
    return 0;
}