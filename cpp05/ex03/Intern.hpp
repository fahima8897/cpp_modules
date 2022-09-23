/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 19:03:55 by fboumell          #+#    #+#             */
/*   Updated: 2022/09/23 19:28:43 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <iomanip>
#include <iostream>
#include <stdexcept>
#include "Form.hpp"

class Intern
{
private:
    
    class FormDoesNotExist : public std::exception
    {
      virtual const char *what() const throw();  
    };
    
public:
    /*  Constructeur    */
        Intern();
    
    /*  Construceur de recopie  */
        Intern(const Intern &src);
        
    /*  Operateur d'affectation */
        Intern &operator=(const Intern &rhs);
        
    /*  Destructeur */
        ~Intern();

    /*  Methode */
        Form *makeForm(std::string nameForm, std::string target);
};

#endif
