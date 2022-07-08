/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 17:10:15 by fboumell          #+#    #+#             */
/*   Updated: 2022/07/08 14:24:38 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "Default constructor FragTrap called" << std::endl;
}

FragTrap::FragTrap(std::string str) : ClapTrap(std::string (str))
{
    std::cout << "Constructor FragTrap called" << std::endl;
    this->_name = str;
    this->_hitPoint = 100;
    this->_energyPoint = 100;
    this->_attack = 30;
}

FragTrap::~FragTrap()
{
    std::cout << "Destructor FragTrap called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &src)
{
    std::cout << "Copy constructor FragTrap called" << std::endl;
    *this = src;
} 

FragTrap &FragTrap::operator=(const FragTrap &rhs)
{
    std::cout << "Copy assignment operator FragTrap called" << std::endl;
    this->_name = rhs._name;
    this->_hitPoint = rhs._hitPoint;
    this->_energyPoint = rhs._energyPoint;
    this->_attack = rhs._attack;
    return (*this);
}

void FragTrap::attack(const std::string &target)
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
        std::cout << " has launched the attack against " << target << std::endl;
        this->_energyPoint--;
        std::cout << "energy after attack : " << this->_energyPoint << std::endl;
        std::cout << "Hit points after attack : " << this->_hitPoint << std::endl;
    }
}

void    FragTrap::highFvesGuys()
{
    std::cout << "Give me a High Five bro!" << std::endl;
}