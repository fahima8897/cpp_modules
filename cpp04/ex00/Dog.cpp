/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 17:00:50 by fboumell          #+#    #+#             */
/*   Updated: 2022/08/25 14:36:44 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Default constructor Dog called" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Destructor Dog called" << std::endl;
}

Dog::Dog(const Dog &src)
{
    std::cout << "Copy constructor Dog called" << std::endl;
    *this = src;
}

Dog &Dog::operator=(const Dog &rhs)
{
    std::cout << "Copy assignment operator Dog called" << std::endl;
    this->_type = rhs._type;
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "Wouaf Wouaf Wouaf!" << std::endl;
}