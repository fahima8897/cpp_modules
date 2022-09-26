/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:08:02 by fboumell          #+#    #+#             */
/*   Updated: 2022/09/26 14:06:33 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
    try
    {
        Intern  stagiaire;
        Form *newForm;

        newForm = stagiaire.makeForm("ShrubberyForm", "Jardin");
        delete newForm;
        newForm = stagiaire.makeForm("grg", "Robot");
        delete newForm;
        newForm = stagiaire.makeForm("RobotomyForm", "Robot");
        delete newForm;
        newForm = stagiaire.makeForm("PresidentialForm", "Pardon");
        delete newForm;
        newForm = stagiaire.makeForm("Hola", "SoyDora");
        delete newForm;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}
