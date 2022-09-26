/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:42:35 by fboumell          #+#    #+#             */
/*   Updated: 2022/09/26 12:16:35 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM_HPP
#define PRESIDENTIAL_PARDON_FORM_HPP

#include <iomanip>
#include <iostream>
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
    
        std::string _target;
    
public:
    /*  Construceurs    */
        PresidentialPardonForm();
        PresidentialPardonForm(std::string str);

    /*  Constructeur de recopie */
        PresidentialPardonForm(const PresidentialPardonForm &src);

    /*  Operateur d'affectation */
        PresidentialPardonForm &operator=(const PresidentialPardonForm &rhs);

    /*  Destructeur */
        virtual ~PresidentialPardonForm();

    /*  Accesseur   */
        std::string getTarget() const;

    /*  Methode */
        virtual void action() const;
};

#endif