/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 12:36:24 by fboumell          #+#    #+#             */
/*   Updated: 2022/09/23 17:37:00 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iomanip>
#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
    
    const std::string   _name;
    bool                _signed;
    const int           _gradeToSign;
    const int           _gradeToExecute;
    
    class GradeTooHighException : public std::exception
    {
        virtual const char *what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
        virtual const char *what() const throw();
    };
    class FormHasToBeSigned : public std::exception
    {
        virtual const char *what() const throw();
    };
    
public:

    /*  Constructors    */
    Form();
    Form(std::string str, const int sign, const int execute);

    /*  Constructuer de recopie */
    Form(const Form &src);

    /*  operateur d'affectation */
    Form &operator=(const Form &rhs);
    
    /*  Destructors */
    virtual ~Form();

    /*  Accessors   */
    std::string getName() const;
    bool        getSigned() const;
    int         getGradeToSign() const;
    int         getGradeToExecute() const;

    /*  Methodes    */
    void beSigned(Bureaucrat const &bureaucrat);
    void execute(Bureaucrat const &executor) const;
    virtual void action() const = 0;
    
};

std::ostream &operator<<(std::ostream &flux, const Form &form);

#endif