/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 16:24:00 by fboumell          #+#    #+#             */
/*   Updated: 2022/07/04 15:58:32 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
}

ClapTrap::ClapTrap(std::string str) : _name(str)
{
    std::cout << "Constructor called" << std::endl;
     _hit = 10;
    _energyPoint = 10;
    _attack = 0;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" <<std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clapRecopie)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = clapRecopie;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &clapOp)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->_name = clapOp._name;
    this->_hit = clapOp._hit;
    this->_energyPoint = clapOp._energyPoint;
    this->_attack = clapOp._attack;
    return (*this);
}

void ClapTrap::attack(const std::string &target)
{
    if (this->_hit == 0 || this->_energyPoint == 0)
    {
        std::cout << this->_name << " has no more Hit point or Energy point";
        std::cout<< std::endl;
    }
    std::cout << "ClapTrap " << this->_name;
    std::cout << " attacks " << target;
    std::cout << " causing " << this->_attack;
    std::cout << " points of damage!" << std::endl;
    this->_energyPoint--;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << this->_name;
    std::cout << " has caused damaged to his opponent.";
    std::cout << " The opponent has lost ";
    std::cout << amount << " of Hit points" << std::endl;
    this->_hit = this->_hit - amount;
    if (this->_hit <= 0)
        std::cout << "ClapTrap " << this->_name << " has died" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_hit == 0 || this->_energyPoint == 0)
    {
        std::cout << "ClapTrap " << this->_name;
        std::cout << " has no more Hit points or Energy points";
        std::cout<< std::endl;
    }
    std::cout << "ClapTrap " << this->_name;
    std::cout << " is repaired. ";
    std::cout << amount << " points of Hit points";
    std::cout << " have been gaigned" << std::endl;
    this->_energyPoint--;
    if (this->_hit < 0)
        this->_hit = 0;
    else
        this->_hit = this->_hit + amount;
    std::cout << "hit " << this->_hit << std::endl;
}
