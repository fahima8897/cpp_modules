/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 16:24:00 by fboumell          #+#    #+#             */
/*   Updated: 2022/07/08 13:48:58 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string str) : _name(str)
{
    std::cout << "Constructor called" << std::endl;
     _hitPoint = 10;
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
    this->_hitPoint = clapOp._hitPoint;
    this->_energyPoint = clapOp._energyPoint;
    this->_attack = clapOp._attack;
    return (*this);
}

void ClapTrap::attack(const std::string &target)
{
    if (this->_hitPoint <= 0 || this->_energyPoint <= 0)
    {
        std::cout  << this->_name;
        std::cout << " has no more Hit points or Energy points to attack";
        std::cout<< std::endl;
    }
    else
    {
        std::cout << this->_name;
        std::cout << " attacks " << target << std::endl;
        this->_energyPoint--;
        std::cout << "energy after attack : " << this->_energyPoint << std::endl;
        std::cout << "Hit points after attack : " << this->_hitPoint << std::endl;
    }
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hitPoint <= 0 || this->_energyPoint <= 0)
    {
        std::cout << this->_name;
        std::cout << " has no more Hit points or Energy points.";
        std::cout << " Attacking the target was not possible, ";
        std::cout << "so no damage could be done";
        std::cout<< std::endl;
    }
    else
    {    
        std::cout << this->_name;
        std::cout << " lost " << amount ;
        std::cout << " of Hit points after attacking" << std::endl;
        this->_hitPoint = this->_hitPoint - amount;
        std::cout << "Hit points after damage : " << this->_hitPoint << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_hitPoint <= 0 || this->_energyPoint <= 0)
    {
        std::cout << this->_name;
        std::cout << " has no more Hit points or Energy points to be repaired";
        std::cout<< std::endl;
    }
    else
    {
        std::cout << this->_name;
        std::cout << " is repaired. ";
        std::cout << amount << " points of Hit points";
        std::cout << " have been gaigned" << std::endl;
        this->_energyPoint--;
        this->_hitPoint = this->_hitPoint + amount;
        std::cout << "energy after repaired : " << this->_energyPoint << std::endl;
        std::cout << "Hit after repaired : " << this->_hitPoint << std::endl;
    }
}
