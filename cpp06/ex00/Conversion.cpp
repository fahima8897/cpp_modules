/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 16:36:58 by fboumell          #+#    #+#             */
/*   Updated: 2022/09/28 17:00:07 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"


Conversion::Conversion()
{
    std::cout << "Default constructor Conversion called" << std::endl;
}

Conversion::Conversion(char *str)
{
    std::cout << "Constructor Conversion called" << std::endl;
}

Conversion::~Conversion()
{
    std::cout << "Destructor Conversion called" << std::endl;
}

Conversion::Conversion(const Conversion &src)
{
    std::cout << "Copy constructor Conversion called" << std::endl;
    *this = src;
}

Conversion &Conversion::operator=(const Conversion &rhs)
{
    std::cout << "Assignment operator Conversion called" << std::endl;
    if (&rhs == this)
        return *this;
    this->_char = rhs.getChar();
    this->_int = rhs.getInt();
    this->_float = rhs.getFloat();
    this->_double = rhs.getDouble();
    return *this;
}

char Conversion::getChar() const
{
    return (this->_char);
}

int Conversion::getInt() const
{
    return (this->_int);
}

float Conversion::getFloat() const
{
    return (this->_float);
}

double Conversion::getDouble() const
{
    return (this->_double);
}

void Conversion::ConvertInt()
{
    
}