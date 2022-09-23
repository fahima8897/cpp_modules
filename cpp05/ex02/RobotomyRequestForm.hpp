/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:42:45 by fboumell          #+#    #+#             */
/*   Updated: 2022/09/23 13:45:42 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_HPP
# define ROBOTOMY_REQUEST_FORM_HPP

#include <iostream>
#include <iomanip>

class RobotomyRequestForm
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
};

#endif
