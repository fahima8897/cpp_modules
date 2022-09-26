/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:42:40 by fboumell          #+#    #+#             */
/*   Updated: 2022/09/26 12:21:14 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
    std::cout << "Default constructor RobotomyRequestForm called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string str) : Form("Robotomy Form", 72, 45), _target(str)
{
    std::cout << "Constructor RobotomyRequestForm called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : Form(src), _target(src.getTarget())
{
    std::cout << "Copy constructor RobotomyRequestForm called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
    if (&rhs == this)
        return (*this);
    this->_target = rhs.getTarget();
    Form::operator=(rhs);
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "Destructor RobotomyRequestForm called" << std::endl;
}

std::string RobotomyRequestForm::getTarget() const
{
    return (this->_target);
}

void RobotomyRequestForm::action() const 
{
    std::cout << "BRUIT DE PERCEUSE!!!!" << std::endl;
    // std::srand(time(0));
    if (std::rand() % 2 == 0)
        std::cout << this->getTarget() << " has been successfully robotomised" << std::endl;
    else
        std::cout << "The robotomisation of " << this->getTarget() << " failed" << std::endl;
}
