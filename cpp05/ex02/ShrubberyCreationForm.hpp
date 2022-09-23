/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:43:05 by fboumell          #+#    #+#             */
/*   Updated: 2022/09/23 17:33:42 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM_HPP
# define SHRUBBERY_CREATION_FORM_HPP

#include <iostream>
#include <iomanip>
#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:

    std::string _target;
    
public:

    /*  Constructeurs   */
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string str);

    /*  Constructeur de recopie */
        ShrubberyCreationForm(const ShrubberyCreationForm &src);

    /*  operateur d'affectation */
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &rhs);
    
    /*  Destructeur */
        virtual ~ShrubberyCreationForm();

    /*  Accesseur   */
        std::string getTarget() const;

    /*  Methods */
        void    action();
};

#endif