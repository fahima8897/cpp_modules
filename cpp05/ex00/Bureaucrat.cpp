/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 12:49:12 by fboumell          #+#    #+#             */
/*   Updated: 2022/09/13 14:41:32 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << " Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string const str, int echelon)
{
    std::cout << "Constructor Breaucrat called" << std::endl;
    this->_name = str;
    this->_grade = echelon; 
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Destructor called" << std::endl;
}

std::string Bureaucrat::getName() const
{
    return (this->_name);
}

int Bureaucrat::getGrade() const
{
    return (this->_grade);
}

void Bureaucrat::GradeTooHighException()
{
    try
    {
        if (this->getGrade() < 0)
            throw std::exception()
        else
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }   
}

void Bureaucrat::GradeTooLowException()
{
    try
    {
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

std::ostream &operator<<(std::ostream &flux, const Bureaucrat &bureau)
{
    flux << bureau.getName() << ", bureaucrat grade" << bureau.getGrade() << std::endl;
    return (flux);
}