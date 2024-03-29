/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:42:45 by fboumell          #+#    #+#             */
/*   Updated: 2022/09/23 18:13:53 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_HPP
# define ROBOTOMY_REQUEST_FORM_HPP

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <time.h>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
    
        std::string _target;
        
public:
    /*  Constructeurs   */
        RobotomyRequestForm();
        RobotomyRequestForm(std::string str);

    /*  Copy constructor    */
        RobotomyRequestForm(const RobotomyRequestForm &src);

    /*  operateur d'affectation */
        RobotomyRequestForm &operator=(const RobotomyRequestForm &rhs);

    /* Destructeur  */
        virtual ~RobotomyRequestForm();
    
    /*  Accesseur   */
        std::string getTarget() const;

    /* Methode  */
        virtual void action() const;
};

#endif
