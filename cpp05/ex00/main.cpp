/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 12:47:13 by fboumell          #+#    #+#             */
/*   Updated: 2022/09/20 18:20:06 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        std::cout << "---- Constructors ----" << std::endl;
    
        Bureaucrat  Luffy("Luffy", 150);
        Bureaucrat  Chopper(Luffy);
        
        std::cout << std::endl;
        
        std::cout << Luffy << std::endl;
        Luffy.EchelonDown();
        std::cout << Luffy << std::endl;
        Luffy.EchelonDown();
        std::cout << Luffy << std::endl;
        Luffy.EchelonDown();
        std::cout << Luffy << std::endl;
        std::cout << "----------------" << std::endl;
        Chopper.EchelonDown();
        std::cout << Chopper << std::endl;
        Chopper.EchelonUp();
        std::cout << Chopper << std::endl;
        Chopper.EchelonUp();
        std::cout << Chopper << std::endl;
        Chopper.EchelonUp();
        std::cout << Chopper << std::endl;
        Chopper.EchelonUp();
        std::cout << Chopper << std::endl;
        Chopper.EchelonUp();
        std::cout << Chopper << std::endl;
        Chopper.EchelonUp();
        std::cout << Chopper << std::endl;
        Chopper.EchelonUp();
        std::cout << Chopper << std::endl;
        
        std::cout << "---- Destructors ----" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    

    
  

    
    return 0;
}