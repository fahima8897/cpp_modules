/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:08:02 by fboumell          #+#    #+#             */
/*   Updated: 2022/09/25 17:26:22 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
    try
    {
        ShrubberyCreationForm   form1("jardin");
        RobotomyRequestForm     form2("robot");
        PresidentialPardonForm  form3("criminel");
        
        form1.action();
        form2.action();
        form3.action();
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    std::cout << std::endl;

    try
    {
        ShrubberyCreationForm   form1("nature");
        Bureaucrat              esclave("Esclave", 138);
        
        esclave.EchelonDown();
        std::cout << esclave;
        esclave.signForm(form1);
        esclave.executeForm(form1);
        form1.action();                
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    std::cout << std::endl;

    try
    {   
        PresidentialPardonForm  Pardon("Sorry");
        PresidentialPardonForm  PardonEncore(Pardon);
        Bureaucrat              Humain("Humain", 7);

        Humain.signForm(Pardon);
        Humain.signForm(PardonEncore);
        Humain.executeForm(Pardon);
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}
