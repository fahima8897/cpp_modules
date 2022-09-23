/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:43:01 by fboumell          #+#    #+#             */
/*   Updated: 2022/09/23 12:09:51 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
    std::cout << "Default constructor ShrubberyCreationForm called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string str) : _target(str)
{
    std::cout << "Constructor ShrubberyCreationForm called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src)
{
    std::cout << "Copy constructor ShrubberyCreationForm called" << std::endl;
    *this = src;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
    std::cout << "Assignement operator ShrubberyCreationForm called" << std::endl;
    if (&rhs == this)
        return (*this);
    this->_target = rhs._target;
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "Destructor ShrubberyCreationForm called" << std::endl;
}
