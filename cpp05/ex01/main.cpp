/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:08:02 by fboumell          #+#    #+#             */
/*   Updated: 2022/09/25 17:30:48 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat  Paris("Paris", 3);
        Bureaucrat  Dauville(Paris);
        Form        London("London", 3, 2);

        Paris.EchelonDown();
        std::cout << Paris;
        Paris.signForm(London);
        std::cout << London;
        Dauville.EchelonUp();
        std::cout << Dauville;
        Dauville.signForm(London);
        std::cout << London;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    std::cout << std::endl;
    
    try
    {
        Bureaucrat  Britney("Britney", 3);
        Form        Christina("Christina", 3, 2);

        Britney.EchelonDown();
        std::cout << Britney;
        Britney.signForm(Christina);
        std::cout << Christina;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    std::cout << std::endl;
    
    try
    {
        Bureaucrat  Fairy("Fairy", 56);
        Form        Witch("Witch", 57, 96);
        Form        Queen(Witch);

        Fairy.EchelonUp();
        std::cout << Fairy;
        Fairy.signForm(Witch);
        std::cout << Witch;
        Fairy.signForm(Queen);
        std::cout << Queen;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    std::cout << std::endl;
    
    try
    {
        Bureaucrat  Britney("Britney", 3);
        Form        Christina("Christina", 3, 2);

        Britney.EchelonDown();
        std::cout << Britney;
        Britney.signForm(Christina);
        std::cout << Christina;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << std::endl;
    
    try
    {
        Bureaucrat  Primark("Primark", 7);
        Form        Zara("Zara", 5, 2);

        Primark.EchelonUp();
        Primark.EchelonUp();
        Primark.EchelonUp();
        Primark.EchelonDown();
        std::cout << Primark;
        Primark.signForm(Zara);
        std::cout << Zara;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << std::endl;
    
    try
    {
        Bureaucrat  Minou("Minou", 35);
        Form        Pipa("Pipa", 33, 62);

        Minou.signForm(Pipa);
        std::cout << Pipa;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    std::cout << std::endl;
    
    try
    {
        Bureaucrat  BTS("BTS", 1);
        Form        Dynamite("Dynamite", 5, 2);

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
        Form BTS("Spring Days", -6, 30);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << std::endl;
    
    try
    {
        Form BTS("Spring Days", 3, 155);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}