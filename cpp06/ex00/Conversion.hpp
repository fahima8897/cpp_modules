/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 16:36:48 by fboumell          #+#    #+#             */
/*   Updated: 2022/09/28 16:59:45 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
# define CONVERSION_HPP

#include <iomanip>
#include <iostream>

class Conversion
{
private:
    
    char    _char;
    int     _int;
    float   _float;
    double  _double;
    
public:

    /*  constructors    */
        Conversion();
        Conversion(char *str);

    /*  copy constructor    */
        Conversion(const Conversion &src);

    /*  operateur d'affectation */
        Conversion &operator=(const Conversion &rhs);

    /*  getter  */
        char getChar() const;
        int  getInt() const;
        float getFloat() const;
        double getDouble() const;   
        
    /*  destructor  */
        ~Conversion();
        
    /*  Methodes    */
        void    ConvertInt();
        void    ConvertChar();
        void    ConvertFloat();
        void    ConvertDouble();
    
};


#endif