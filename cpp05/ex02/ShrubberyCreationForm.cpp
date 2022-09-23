/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:43:01 by fboumell          #+#    #+#             */
/*   Updated: 2022/09/23 17:34:00 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
    std::cout << "Default constructor ShrubberyCreationForm called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string str) : Form("Shrubbery Form", 145,  137), _target(str)
{
    std::cout << "Constructor ShrubberyCreationForm called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : Form(src), _target(src.getTarget())
{
    std::cout << "Copy constructor ShrubberyCreationForm called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
    std::cout << "Assignement operator ShrubberyCreationForm called" << std::endl;
    if (&rhs == this)
        return (*this);
    this->_target = rhs.getTarget();
    Form::operator=(rhs);
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "Destructor ShrubberyCreationForm called" << std::endl;
}

std::string ShrubberyCreationForm::getTarget() const
{
    return (this->_target);
}

void ShrubberyCreationForm::action()
{
    std::string filename(this->getTarget() + "_shrubbery");
    std::fstream output;

    output.open(filename.c_str(), std::ios_base::out);
    if (!output.is_open())
        std::cout << filename << " failed to open" << std::endl;
    else
    {
        output << "   oxoxoo    ooxoo" << std::endl;
        output << " ooxoxo oo  oxoxooo" << std::endl;
        output << "oooo xxoxoo ooo ooox" << std::endl;
        output << "oxo o oxoxo  xoxxoxo" << std::endl;
        output << " oxo xooxoooo o ooo" << std::endl;
        output << "  ooo\\oo\\  /o/o" << std::endl;
        output << "      \\  \\/ /" << std::endl;
        output << "       |   /" << std::endl;
        output << "       |  |" << std::endl;
        output << "       | D|" << std::endl;
        output << "       |  |" << std::endl;
        output << "       |  |" <<std::endl;
        output << "     __/___\\____" << std::endl;
        output.close();
    }
}

