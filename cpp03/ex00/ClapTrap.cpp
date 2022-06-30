/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 16:24:00 by fboumell          #+#    #+#             */
/*   Updated: 2022/06/30 17:37:49 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    _hit = 10;
    _energyPoint = 10;
    _attack = 0;
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string str) : _name(str)
{
    std::cout << "Constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" <<std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clapRecopie)
{
    *this = clapRecopie;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &clapOp)
{
    _name = clapOp._name;
    _hit = clapOp._hit;
    _energyPoint = clapOp._energyPoint;
    _attack = clapOp._attack;
    return *this;
}

int ClapTrap::getHit(void) const
{
    return (this->_hit);
}

int ClapTrap::getEnergyPoint(void) const
{
    return (this->_energyPoint);
}

int ClapTrap::getAttack(void) const
{
    return (this->_attack);
}

void ClapTrap::attack(const std::string &target)
{
    // if (_hit <= 0 || _energyPoint <= 0)
    // {
    //     std::cout << this->_name << " has no more Hit point or Energy point";
    //     std::cout<< std::endl;
    // }
    // else
    // {
        std::cout << "ClapTrap " << this->_name;
        std::cout << " attacks " << target;
        // std::cout << " causing ";
        std::cout << " points of damage!" << std::endl;
        this->_energyPoint--;
    // }
}

void ClapTrap::beReparaired(unsigned int amount)
{
    // if (_hit <= 0 || _energyPoint <= 0)
    // {
    //     std::cout << this->_name << " has no more Hit point or Energy point";
    //     std::cout<< std::endl;
    // }
    // else
    // {
        std::cout << "ClapTrap " << this->_name;
        std::cout << " is repaired. ";
        std::cout << amount << " points of " << this->_hit;
        std::cout << " has been gaigned" << std::endl;
        this->_energyPoint--;
        this->_hit++;
    // }
}
