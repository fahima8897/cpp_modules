/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:42:27 by fboumell          #+#    #+#             */
/*   Updated: 2022/09/26 12:16:23 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
    std::cout << "Default constructor PresidentialPardonForm called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string str) : Form("Presidential Form", 25, 5), _target(str)
{
    std::cout << "Constructor PresidentialPardonForm called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : Form(src), _target(src.getTarget())
{
    std::cout << "Copy constructor PresidentialPardonForm called" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
    if (&rhs == this)
        return (*this);
    this->_target = rhs.getTarget();
    Form::operator=(rhs);
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "Destructor PresidentialPardonForm called" << std::endl;
}

std::string PresidentialPardonForm::getTarget() const
{
    return (this->_target);
}

void PresidentialPardonForm::action() const
{
    std::cout << this->getTarget() << " has been forgiven by Zaphod Beeblebrox" << std::endl;
}

