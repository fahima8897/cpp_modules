/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 17:10:15 by fboumell          #+#    #+#             */
/*   Updated: 2022/07/08 13:44:06 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "Default constructor FragTrap called" << std::endl;
}

FragTrap::FragTrap(std::string str) : ClapTrap()
{
    std::cout << "Constructor FragTrap called" << std::endl;
    this->_name = str;
    this->_hit = 100;
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
    this->_hit = rhs._hit;
    this->_energyPoint = rhs._energyPoint;
    this->_attack = rhs._attack;
    return (*this);
}

void    FragTrap::highFvesGuys()
{
    std::cout << "Give me a High Five bro!" << std::endl;
}