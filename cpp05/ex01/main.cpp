/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:08:02 by fboumell          #+#    #+#             */
/*   Updated: 2022/09/22 15:18:17 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat  BTS("BTS", 4);
        Form        Dynamite("Dynamite", 5, 2);

        std::cout << BTS;
        Dynamite.beSigned(BTS);
        BTS.signForm(Dynamite);
        std::cout << Dynamite;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;
    try
    {
        Form BTS("Spring Days", 151, 5);
        std::cout << BTS;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    
    
    

    return 0;
}