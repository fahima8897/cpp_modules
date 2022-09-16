/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 12:49:12 by fboumell          #+#    #+#             */
/*   Updated: 2022/09/16 15:32:13 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << " Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string str, int echelon)
{
    std::cout << "Constructor Breaucrat called" << std::endl;
    _name = str;
    _grade = echelon; 
}

Bureaucrat::Bureaucrat(const Bureaucrat &src)
{
    std::cout << "Copy constructor Bureaucrat Called" << std::endl;
    *this = src;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs)
{
    std::cout << "Copy assignment operator Bureaucrat called" << std::endl;
    if (&rhs == this)
        return (*this);
    this->_grade = rhs._grade;
    this->_name = rhs._name;
    return (*this);
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