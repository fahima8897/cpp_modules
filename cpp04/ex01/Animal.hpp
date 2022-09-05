/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 16:52:20 by fboumell          #+#    #+#             */
/*   Updated: 2022/09/05 13:27:21 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iomanip>
#include <iostream>

class Animal
{
protected:
    
    std::string type;
    
public:

    /* constructeurs & destructeur  */
        Animal();
        Animal(std::string str);
        virtual ~Animal();

    /*  constructeur de recopie */
        Animal(const Animal &src);

    /*  operateur d'affectation */
        Animal &operator=(const Animal &rhs);
    
    /*  getter  */
        std::string getType() const;

    /*  Methodes    */
        virtual void    makeSound() const;
        
};

#endif