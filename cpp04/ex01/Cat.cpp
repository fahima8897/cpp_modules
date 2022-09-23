/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 16:57:48 by fboumell          #+#    #+#             */
/*   Updated: 2022/09/16 15:02:26 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Default constructor Cat called" << std::endl;
    _brain = new Brain();
}

Cat::~Cat()
{
    std::cout << "Destructor Cat called" << std::endl;
    delete _brain;
}

Cat::Cat(const Cat &src)
{
    std::cout << "Copy constructor Cat called" << std::endl;
    _brain = new Brain();
    *this = src;
}

Cat &Cat::operator=(const Cat &rhs)
{
    std::cout << "Copy assignment operator Cat called" << std::endl;  
    if (&rhs == this)
        return *this;
    this->type = rhs.type;
    *(this->_brain) = *(rhs._brain);
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Miaou Miaou Miaou!" << std::endl;
}

Brain *Cat::getBrain() const
{
    return (this->_brain);
}