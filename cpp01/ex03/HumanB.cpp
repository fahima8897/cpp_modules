/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 17:33:43 by fboumell          #+#    #+#             */
/*   Updated: 2022/06/21 14:12:47 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(){
}

HumanB::HumanB(std::string s1): _name(s1), _arme(NULL){
}

HumanB::~HumanB(){
}

void HumanB::attack()
{
    if (this->_arme == NULL)
        return ;
    std::cout << this->_name << " attacks with their " << this->_arme->getType() <<std::endl;
}

void HumanB::setWeapon(Weapon &arme)
{
    this->_arme = &arme;
}