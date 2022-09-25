/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 19:03:59 by fboumell          #+#    #+#             */
/*   Updated: 2022/09/25 16:49:30 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "Default constructor Intern called" << std::endl;
}

Intern::Intern(const Intern &src)
{
    std::cout << "Copy constructor Intern called" << std::endl;
    *this = src;
}

Intern &Intern::operator=(const Intern &rhs)
{
    std::cout << "Assignement operator Intern called" << std::endl;
    (void)rhs;
    return (*this);
    
}

Intern::~Intern()
{
    std::cout << "Destructor Intern called" << std::endl;
}

Form *Intern::_ShrubberyForm(std::string target)
{
    Form *newForm = new ShrubberyCreationForm(target);
    std::cout << "Intern creates Shrubberry Form" << std::endl;
    return (newForm);
}

Form *Intern::_RobotomyForm(std::string target)
{
    Form *newForm = new RobotomyRequestForm(target);
    std::cout << "Intern creates Robotomy Form" << std::endl;
    return (newForm);
}

Form *Intern::_PresidentialForm(std::string target)
{
    Form *newForm = new PresidentialPardonForm(target);
    std::cout << "Intern creates Presidential Form" << std::endl;
    return (newForm);
}

const char *Intern::FormDoesNotExist::what() const throw()
{
    return ("The form does not exist!");
}

Form *Intern::makeForm(std::string name, std::string target)
{
    std::string tab[3] = {"ShrubberyForm", "RobotomyForm", "PresidentialForm"};
    
    Form *(Intern::*f[3])(std::string) = {&Intern::_ShrubberyForm, &Intern::_RobotomyForm, &Intern::_PresidentialForm};

    try
    {
        for (int i = 0; i < 3; i++)
            if (name == tab[i])
                return ((this->*f[i])(target));
        throw Intern::FormDoesNotExist();
        return (NULL);
    }
    catch(const std::exception& e)
    {
        std::cerr << "The form couldn't be created because ";
        std::cerr << e.what() << '\n';
        return (NULL);
    }

}
