/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 12:37:40 by fboumell          #+#    #+#             */
/*   Updated: 2022/09/21 17:27:26 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Default name"), _signed(0), _gradeToSign(1), _gradeToExecute(150)
{
    std::cout << "Default constructor Form called" << std::endl;
}

Form::Form(std::string str, const int sign, const int execute)
{
    // if (this->getGradeToSign() > this->getGradeToExecute())
    //     throw From::GradeTooLowException();
    if (this->getGradeToSign() < 1 || this->getGradeToExecute() < 1)
        throw Form::GradeTooHighException();
    if (this->getGradeToSign() > 150 || this->getGradeToExecute() > 150)
        throw Form::GradeTooLowExcetion();
    std::cout << "Constructor Form called" << std::endl;
    this->_name = str;
    this->_signed = 0;
    this->_gradeToSign = sign;
    this->_gradeToExecute = execute;
}

Form::Form(const Form &src) : _name(src.getName()), _signed(src._signed()), _gradeToSign(src.getGradeToSign()), _gradeToExecute(src.getGradeToExecute())
{
    // if (this->getGradeToSign() > this->getGradeToExecute())
    //     throw From::GradeTooLowException();
    if (this->getGradeToSign() < 1 || this->getGradeToExecute() < 1)
        throw Form::GradeTooHighException();
    if (this->getGradeToSign() > 150 || this->getGradeToExecute() > 150)
        throw Form::GradeTooLowExcetion();
    std::cout << "Copy constructor Form called" << std::endl;
    *this = src;
}

Form &Form::operator=(const Form &rhs)
{
    if (&rhs == this)
        return (*this);
    std::cout << "Assignement operator Form called" << std::endl;
    this->_signed = rhs._signed;
    // this->_getGradeToSign = rhs._gradeToSign;
    // this->_gradeToExecute = rhs._gradeToExecute;
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

const char *Form::GradeTooLowExcetion::what() const throw()
{
    return ("The grade is too Low!");
}

std::string Form::getName()
{
    return (this->_name);
}

bool Form::getSigned()
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

void Form::beSigned(const Bureaucrat &Bureaucrat)
{
    if (Bureaucrat.getGrade() <= this->getGradeToSign())
        this->getSigned() == 1;
    if (Bureaucrat.getGrade() > this->getGradeToSign())
        throw Form::GradeTooLowExcetion();
}

std::ostream &operator<<(std::ostream &flux, const Form &form)
{
    if (this->getSigned() == 0)
        flux << "Form " << form.getName() << "was not signed, so it can't be executed" << std::endl;
    if (this->getSigned() == 1)
        flux << "Form" << form.getName() << "was signed by a grade " << form.getGradeToSign() << " and executed by a grade " << form.getGradeToExecute() << std::endl;
    return flux;
}