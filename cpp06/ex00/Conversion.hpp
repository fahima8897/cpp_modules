/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 16:36:48 by fboumell          #+#    #+#             */
/*   Updated: 2022/09/27 16:31:29 by fboumell         ###   ########.fr       */
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
    Conversion();
    ~Conversion();
};


#endif