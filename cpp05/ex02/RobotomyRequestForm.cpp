/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:42:40 by fboumell          #+#    #+#             */
/*   Updated: 2022/09/23 13:49:35 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
    std::cout << "Default constructor RobotomyRequestForm called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string str) : _target(str)
{
    std::cout << "Constructor RobotomyRequestForm called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src)
{
    std::cout << "Copy constructor RobotomyRequestForm called" << std::endl;
    *this = src;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
    if (&rhs == this)
        return (*this);
    this->_target = rhs._target;
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "Destructor RobotomyRequestForm called" << std::endl;
}

