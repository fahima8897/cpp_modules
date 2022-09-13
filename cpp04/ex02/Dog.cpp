/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 17:00:50 by fboumell          #+#    #+#             */
/*   Updated: 2022/09/07 19:13:04 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal("Dog")
{
    std::cout << "Default constructor Dog called" << std::endl;
    _brain = new Brain();
}

Dog::~Dog()
{
    std::cout << "Destructor Dog called" << std::endl;
    delete _brain;
}

Dog::Dog(const Dog &src)
{
    std::cout << "Copy constructor Dog called" << std::endl;
    *this = src;
}

AAnimal &Dog::operator=(const Dog &rhs)
{
    std::cout << "Copy assignment operator Dog called" << std::endl;
    this->type = rhs.type;
    *(this->_brain) = *(rhs.getBrain());
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "Wouaf Wouaf Wouaf!" << std::endl;
}

Brain *Dog::getBrain() const
{
    return (this->_brain);
}