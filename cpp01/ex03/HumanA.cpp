/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 16:18:10 by fboumell          #+#    #+#             */
/*   Updated: 2022/06/20 17:23:06 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(){
}

HumanA::HumanA(std::string s1, Weapon arme) : _name(s1), _arme(arme){
}

HumanA::~HumanA(){
}

void HumanA::attack()
{
    std::cout << this->_name << "attacks with their " << _arme.getType() << std::endl;
}