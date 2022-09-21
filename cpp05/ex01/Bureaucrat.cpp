/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 12:49:12 by fboumell          #+#    #+#             */
/*   Updated: 2022/09/21 17:31:05 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string str, int echelon) : _name(str), _grade(echelon)
{
    if (this->getGrade() < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (this->getGrade() > 150)
        throw Bureaucrat::GradeTooLowException();
    std::cout << "Constructor Bureaucrat called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) : _name(src.getName()), _grade(src.getGrade()) //si pas initialiser grade ici il considere qu'il est a 0
{
    if (this->getGrade() < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (this->getGrade() > 150)
        throw Bureaucrat::GradeTooLowException();
    *this = src;
    std::cout << "Copy constructor Bureaucrat Called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs)
{
    if (&rhs == this)
        return (*this);
    this->_grade = rhs._grade;
    std::cout << "Copy assignment operator Bureaucrat called" << std::endl;
    return (*this);
}
Bureaucrat::~Bureaucrat()
{
    std::cout << "Destructor Bureaucrat called" << std::endl;
}

std::string Bureaucrat::getName() const
{
    return (this->_name);
}

int Bureaucrat::getGrade() const
{
    return (this->_grade);
}

void Bureaucrat::EchelonDown()
{
    if (this->getGrade() >= 150)
        throw Bureaucrat::GradeTooLowException();
    this->_grade++;
}

void Bureaucrat::EchelonUp()
{
    if (this->getGrade() <= 1)
        throw Bureaucrat::GradeTooHighException();
    this->_grade--;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("The grade is too High!");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("The grade is too Low!");
}

void Bureaucrat::signForm(Form &form) //a reoir avec condition
{
    if (form.getSigned() == 1)
        std::cout << this->getName() << " signed " << form.getName() << std::endl;
    else if (form.getSigned() == 0) //verifier si aussi grade suffisant
        std::cout << this->getName() << " couldn't sign " << form.getName()  << " because of the grade" << std::endl;
} //appeler fonction besigned si pas signe

std::ostream &operator<<(std::ostream &flux, const Bureaucrat &bureau)
{
    flux << bureau.getName() << ", bureaucrat grade " << bureau.getGrade() << std::endl;
    return (flux);
}