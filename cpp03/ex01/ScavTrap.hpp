/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 17:23:19 by fboumell          #+#    #+#             */
/*   Updated: 2022/07/06 16:51:27 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_H
# define SCAV_TRAP_H

#include <iostream>
#include <iomanip>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
    /* data */
public:

    /*  Construceurs & Destructeurs */
        ScavTrap();
        ScavTrap(std::string name);
        ~ScavTrap();

    /*  constructeur de recopie */
        ScavTrap(const ScavTrap &src);

    /*  operateur d'affectation */
        ScavTrap &operator=(const ScavTrap &rhs);

    /*  Methodes    */
        void guardGate();
        void attack(const std::string &target);
    
};

#endif