/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 16:36:58 by fboumell          #+#    #+#             */
/*   Updated: 2022/09/29 15:09:21 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

Conversion::Conversion() : _d(0){}

Conversion::Conversion(std::string str) : _d(atof(str.c_str()))
{
    if (!_d and str.size() == 1 and str.c_str()[0] != '0')
        _d = static_cast<double>(str.c_str()[0]);
    else if (!_d and str.size() > 1 and str[0] != '0')
        throw BadArgument();
}

Conversion::~Conversion(){}

Conversion::Conversion(const Conversion &src)
{
    *this = src;
}

Conversion &Conversion::operator=(const Conversion &rhs)
{
    if (&rhs == this)
        return *this;
    this->_d = rhs._d;
    return *this;
}


void Conversion::ConvertChar()
{
    std::cout << "char: ";
    if (std::isnan(this->_d) or std::isinf(this->_d))
        std::cout << "impossible" << std::endl;
    else if (!isprint(static_cast<char>(this->_d)))
        std::cout << "Non displayable" << std::endl;
    else
        std::cout << static_cast<char>(this->_d) << std::endl;
}

void Conversion::ConvertInt()
{
    std::cout << "int: ";
    if (std::isnan(this->_d) or std::isinf(this->_d))
        std::cout << "impossible" << std::endl;
    else
        std::cout << static_cast<int>(this->_d) << std::endl;
}

void Conversion::ConvertFloat()
{
    std::cout << "float: ";
    std::cout << static_cast<float>(this->_d);
    if (std::fmod(this->_d,1) == 0)
        std::cout << ".0";
    std::cout << 'f' << std::endl;
}

void Conversion::ConvertDouble()
{
    std::cout << "double: ";
    std::cout << static_cast<double>(this->_d);    
    if (std::fmod(this->_d,1) == 0)
        std::cout << ".0";
    std::cout << std::endl;
}

const char *Conversion::BadArgument::what() const throw()
{
    return ("Bad argument");
}