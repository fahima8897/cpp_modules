/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 17:22:49 by fboumell          #+#    #+#             */
/*   Updated: 2022/07/08 14:17:31 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "Default constructor ScavTrap called" << std::endl;
}

ScavTrap::ScavTrap(std::string str) : ClapTrap(std::string (str))
{
    std::cout << "Constructor ScavTrap called" << std::endl;
    this->_name = str;
    this->_hitPoint = 100;
    this->_energyPoint = 50;
    this->_attack = 20;
}

ScavTrap::ScavTrap(const ScavTrap &src)
{
    std::cout << "Copy constructor ScavTrap called" << std::endl;
    *this = src;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &rhs)
{
    std::cout << "Copy assignment operator ScavTrap called" << std::endl;
    this->_name = rhs._name;
    this->_hitPoint = rhs._hitPoint;
    this->_energyPoint = rhs._energyPoint;
    this->_attack = rhs._attack;
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destructor ScavTrap called" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->_name << " : mode Gate Keeper activated";
    std::cout << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
    if (this->_hitPoint <= 0 || this->_energyPoint <= 0)
    {
        std::cout << this->_name;
        std::cout << " has no more Hit points or Energy points to attack";
        std::cout<< std::endl;
    }
    else
    {
        std::cout << this->_name;
        std::cout << " attacked his target " << target << std::endl;
        this->_energyPoint--;
        std::cout << "energy after attack : " << this->_energyPoint << std::endl;
        std::cout << "Hit points after attack : " << this->_hitPoint << std::endl;
    }
}