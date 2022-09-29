/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 16:36:48 by fboumell          #+#    #+#             */
/*   Updated: 2022/09/29 14:13:22 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
# define CONVERSION_HPP

#include <iomanip>
#include <iostream>
#include <cmath>

class Conversion
{
private:

        double      _d;

        class BadArgument : public std::exception
        {
            const char *what() const throw();
        };
    
public:

    /*  constructors    */
        Conversion();
        Conversion(std::string str);

    /*  copy constructor    */
        Conversion(const Conversion &src);

    /*  operateur d'affectation */
        Conversion &operator=(const Conversion &rhs);

    /*  destructor  */
        ~Conversion();
        
    /*  Methodes    */
        void    ConvertChar();
        void    ConvertInt();
        void    ConvertFloat();
        void    ConvertDouble();
    
};

#endif