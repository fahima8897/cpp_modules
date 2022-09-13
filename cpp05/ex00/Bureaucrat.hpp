/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 12:47:43 by fboumell          #+#    #+#             */
/*   Updated: 2022/09/13 14:37:13 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iomanip>
#include<iostream>

class Bureaucrat
{
private:
    
    int _grade;
    const std::string   _name;
    
public:

    /*  constructeurs & destructeurs    */
        Bureaucrat();
        Bureaucrat(std::string str, int echelon);
        ~Bureaucrat();

    /*  Accesseurs */
        std::string    getName() const;
        int   getGrade() const;
    
    /*  Methodes    */
        void EchelonUp();
        void EchelonDown();
        void GradeTooHighException();
        void GradeTooLowException();
        
};

std::ostream &operator<<(std::ostream &flux, const Bureaucrat &bureau);

#endif