/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 16:37:07 by fboumell          #+#    #+#             */
/*   Updated: 2022/09/29 13:51:33 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Wrong number of arguments" << std::endl;
        return (1);
    }
    try
    {
        Conversion  toConvert(av[1]);
        
        toConvert.ConvertChar();
        toConvert.ConvertInt();
        toConvert.ConvertFloat();
        toConvert.ConvertDouble();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}