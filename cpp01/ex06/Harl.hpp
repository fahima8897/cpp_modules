/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 16:54:27 by fboumell          #+#    #+#             */
/*   Updated: 2022/06/24 17:14:22 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

#include <iostream>
#include <iomanip>

class Harl
{
private:

    void    _debug(void);
    void    _info(void);
    void    _warning(void);
    void    _error(void);
    
public:

    /*  constructeur & destructeur  */
        Harl();
        ~Harl();
    
    /*  Methods */
        void    complain(std::string level);
};

#endif