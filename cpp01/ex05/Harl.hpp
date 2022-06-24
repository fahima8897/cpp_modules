/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/24 15:17:52 by fboumell          #+#    #+#             */
/*   Updated: 2022/06/24 15:23:24 by fboumell         ###   ########.fr       */
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
        Harl(/* args */);
        ~Harl();

    /*  Methods */
        void    complain(std::string level);
};

#endif
