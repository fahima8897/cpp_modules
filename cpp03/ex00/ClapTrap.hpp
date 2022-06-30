/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 16:23:08 by fboumell          #+#    #+#             */
/*   Updated: 2022/06/30 16:43:29 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_H
# define CLAP_TRAP_H

#include <iostream>
#include <iomanip>

class ClapTrap
{
private:

    std::string _name;
    int         _hit = 10;
    int         _energyPoint = 10;
    int         _attack = 0;

public:

    /*  constructeur & destructeur  */
        ClapTrap();
        ClapTrap(std::string str);
        ~ClapTrap();

    /*  constructeur de recopie */
        ClapTrap(const ClapTrap &clapRecopie);

    /*  operateur d'affectation */
        ClapTrap &operator=(const ClapTrap &clapOp);

    /*  Methods */
        void    attack(const std::string &target);
        void    takeDamage(unsigned int amount);
        void    beReparaired(unsigned int amount);
    
};




#endif