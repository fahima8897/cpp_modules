/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 12:47:43 by fboumell          #+#    #+#             */
/*   Updated: 2022/09/20 18:10:09 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iomanip>
#include <iostream>
#include <stdexcept>

class Bureaucrat
{
private:
    
    /*  Attributs   */
        const std::string   _name;
        int _grade;
        
    /*  Nusted classes  */
        class GradeTooHighException : public std::exception
        {
            virtual const char *what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            virtual const char *what() const throw();
        };
    
public:

    /*  constructeurs & destructeurs    */
        Bureaucrat();
        Bureaucrat(std::string str, int echelon);

    /*  destructeur */
        ~Bureaucrat();

    /*  constructeur de recopie */
        Bureaucrat(const Bureaucrat &src);

    /*  operateur d'affectation */
        Bureaucrat &operator=(const Bureaucrat &rhs);

    /*  Accesseurs */
        std::string    getName() const;
        int   getGrade() const;
    
    /*  Methodes    */
        void EchelonUp();
        void EchelonDown();
};

std::ostream &operator<<(std::ostream &flux, const Bureaucrat &bureau);

#endif