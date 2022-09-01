/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 16:57:48 by fboumell          #+#    #+#             */
/*   Updated: 2022/09/01 15:48:11 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Default constructor Cat called" << std::endl;
    this->_brain = new Brain();
}

Cat::~Cat()
{
    std::cout << "Destructor Cat called" << std::endl;
    delete this->_brain;
}

Cat::Cat(const Cat &src)
{
    std::cout << "Copy constructor Cat called" << std::endl;
    *this = src;
}

Cat &Cat::operator=(const Cat &rhs)
{
    std::cout << "Copy assignment operator Cat called" << std::endl;   
    this->_type = rhs._type;
    this->_brain = rhs._brain;
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Miaou Miaou Miaou!" << std::endl;
}