/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 17:32:43 by fboumell          #+#    #+#             */
/*   Updated: 2022/06/21 13:54:22 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_H
# define HUMAN_B_H

#include "Weapon.hpp"

class HumanB
{
private:
    
    std::string _name;
    Weapon      *_arme;
    
public:

    /*  constructeurs & destructeurs */
        HumanB();
        HumanB(std::string s1);
        ~HumanB();
    
    /*  setter  */
        void    setWeapon(Weapon &arme);
        
    /*  Methodes    */
        void    attack();
};




#endif
