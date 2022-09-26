/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 12:47:13 by fboumell          #+#    #+#             */
/*   Updated: 2022/09/26 11:14:52 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    std::cout << "\e[34m---- Test 1 ----\e[39m" << std::endl;
    try
    {
        Bureaucrat  Luffy("Luffy", 150);
        Bureaucrat  Chopper(Luffy);
        
        std::cout << std::endl;
        
        Luffy.EchelonUp();
        std::cout << Luffy;
        Luffy.EchelonUp();
        std::cout << Luffy;
        Luffy.EchelonUp();
        std::cout << Luffy;
        std::cout << "----------------" << std::endl;
        Chopper.EchelonUp();
        std::cout << Chopper;
        Chopper.EchelonUp();
        std::cout << Chopper;
        Chopper.EchelonUp();
        std::cout << Chopper;
        Chopper.EchelonUp();
        std::cout << Chopper;
        Chopper.EchelonUp();
        std::cout << Chopper;
        Chopper.EchelonUp();
        std::cout << Chopper;
        Chopper.EchelonUp();
        std::cout << Chopper;
        Chopper.EchelonUp();
        std::cout << Chopper;
        
        std::cout << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    std::cout << std::endl;
    std::cout << "\e[34m---- Test 2 ----\e[39m" << std::endl;
    try
    {
        Bureaucrat Bleach("Bleach", -1);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    std::cout << std::endl;
    std::cout << "\e[34m---- Test 3 ----\e[39m" << std::endl;
    try
    {
        Bureaucrat MochiMochi("MochiMochi", 151);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    std::cout << std::endl;
    std::cout << "\e[34m---- Test 4 ----\e[39m" << std::endl;
    try
    {
        Bureaucrat Light("Light", 35);
        
        std::cout << std::endl;
       
        Light.EchelonUp();
        std::cout << Light;
        Light.EchelonUp();
        std::cout << Light;
        Light.EchelonUp();
        std::cout << Light;
        Light.EchelonUp();
        std::cout << Light;
        Light.EchelonDown();
        std::cout << Light;
        
        std::cout << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}
