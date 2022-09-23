/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 19:03:59 by fboumell          #+#    #+#             */
/*   Updated: 2022/09/23 19:31:57 by fboumell         ###   ########.fr       */
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
    std::cout << " Destructor Itern called" << std::endl;
}

const char *Intern::FormDoesNotExist::what() const throw()
{
    return ("The form does not exist!");
}

Form *Intern::makeForm(std::string name, std::string target)
{

}
