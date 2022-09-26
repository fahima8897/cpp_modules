/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 12:37:40 by fboumell          #+#    #+#             */
/*   Updated: 2022/09/26 11:39:47 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Default name"), _signed(0), _gradeToSign(150), _gradeToExecute(150)
{
    std::cout << "Default constructor Form called" << std::endl;
}

Form::Form(std::string str, const int sign, const int execute) : _name(str), _signed(0), _gradeToSign(sign),
_gradeToExecute(execute)
{
    if (this->getGradeToSign() < 1 || this->getGradeToExecute() < 1)
        throw Form::GradeTooHighException();
    else if (this->getGradeToSign() > 150 || this->getGradeToExecute() > 150)
        throw Form::GradeTooLowException();
    std::cout << "Constructor Form called" << std::endl;
}

Form::Form(const Form &src) : _name(src.getName()), _signed(src.getSigned()), _gradeToSign(src.getGradeToSign()), _gradeToExecute(src.getGradeToExecute())
{
    if (this->getGradeToSign() < 1 || this->getGradeToExecute() < 1)
        throw Form::GradeTooHighException();
    else if (this->getGradeToSign() > 150 || this->getGradeToExecute() > 150)
        throw Form::GradeTooLowException();
    std::cout << "Copy constructor Form called" << std::endl;
    *this = src;
}

Form &Form::operator=(const Form &rhs)
{
    if (&rhs == this)
        return (*this);
    std::cout << "Assignement operator Form called" << std::endl;
    return (*this);
}

Form::~Form()
{
    std::cout << "Destructor Form called" << std::endl;
}

const char *Form::GradeTooHighException::what() const throw()
{
    return ("The grade is too High!");
}

const char *Form::GradeTooLowException::what() const throw()
{
    return ("The grade is too Low!");
}

std::string Form::getName() const
{
    return (this->_name);
}

bool Form::getSigned() const
{
    return (this->_signed);
}

int Form::getGradeToExecute() const
{
    return (this->_gradeToExecute);
}

int Form::getGradeToSign() const
{
    return (this->_gradeToSign);
}

void Form::beSigned(Bureaucrat const &bureaucrat)
{
    if (bureaucrat.getGrade() > this->getGradeToSign())
        throw Form::GradeTooLowException();
    else
        this->_signed = 1;
}

std::ostream &operator<<(std::ostream &flux, const Form &form)
{
    if (form.getSigned() == 0)
        flux << "Form " << form.getName() << " was not signed, so it can't be executed" << std::endl;
    else if (form.getSigned() == 1)
        flux << "Form " << form.getName() << " was signed by a grade " << form.getGradeToSign() << " and executed by a grade " << form.getGradeToExecute() << std::endl;
    return flux;
}