/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 16:52:20 by fboumell          #+#    #+#             */
/*   Updated: 2022/08/24 15:09:59 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iomanip>
#include <iostream>

class Animal
{
protected:
    
    std::string _type;
    
public:

    /* constructeurs & destructeur  */
        Animal();
        ~Animal();

    /*  constructeur de recopie */
        Animal(const Animal &src);

    /*  operateur d'affectation */
        Animal &operator=(const Animal &rhs);

    
        
    /*  Methodes    */
        void    makeSound();
        
};

#endif