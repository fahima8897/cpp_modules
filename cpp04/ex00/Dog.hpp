/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 17:01:02 by fboumell          #+#    #+#             */
/*   Updated: 2022/09/14 15:10:28 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
private:
    /* data */
public:

    /*  constructeur & destruceur   */
        Dog();
        virtual ~Dog();
        
    /*  constructeur de recopie */
        Dog(const Dog &src);

    /*  operateur d'affectation */
        Dog &operator=(const Dog &rhs);

    /*  Methodes    */
    void    makeSound() const;

};

#endif