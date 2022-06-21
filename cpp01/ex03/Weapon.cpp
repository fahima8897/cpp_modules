/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 15:43:54 by fboumell          #+#    #+#             */
/*   Updated: 2022/06/21 14:12:11 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){
}

Weapon::Weapon(std::string s1) : _type(s1){
}

Weapon::~Weapon(){
}

const std::string &Weapon::getType(void)
{
	return (this->_type);
}

void	Weapon::setType(std::string new_one)
{
	this->_type = new_one;
}