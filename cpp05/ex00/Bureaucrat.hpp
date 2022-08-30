/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 12:47:43 by fboumell          #+#    #+#             */
/*   Updated: 2022/08/30 13:14:25 by fboumell         ###   ########.fr       */
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
        ~Bureaucrat();

    /*  getters */
        std::string    getName();
        int   getGrade();
    
    /*  Methodes    */
        Bureaucrat operator++(int);
        Bureaucrat operator--(int);
};




#endif