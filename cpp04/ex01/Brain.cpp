/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 16:40:14 by fboumell          #+#    #+#             */
/*   Updated: 2022/08/30 13:18:31 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Default constructor Brain called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Destructor Brain called" << std::endl;
}

Brain::Brain(const Brain &src)
{
    std::cout << "Copy constructor Brain called" << std::endl;
    *this = src;
}

Brain &Brain::operator=(const Brain &rhs)
{
    std::cout << "Copy assignment operator Brain called" << std::endl;
    
    int i;
    
    for (i = 0; i < 100; i++)
        this->ideas[i] = rhs.ideas[i];
    return (*this);
}
