/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 17:33:43 by fboumell          #+#    #+#             */
/*   Updated: 2022/06/20 17:40:37 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(){
}

HumanB::HumanB(std::string s1): _name(s1){
}

HumanB::~HumanB(){
}

void HumanB::attack()
{
    std::cout << this->_name << "attacks with their " << _arme.getType() <<std::endl;
}

void HumanB::setWeapon(Weapon arme)
{
    
}