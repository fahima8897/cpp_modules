/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 17:01:02 by fboumell          #+#    #+#             */
/*   Updated: 2022/09/07 18:10:42 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
    
        Brain   *_brain;
    
public:

    /*  constructeur & destruceur   */
        Dog();
        virtual ~Dog();
        
    /*  constructeur de recopie */
        Dog(const Dog &src);

    /*  operateur d'affectation */
        Animal &operator=(const Dog &rhs);

    /*  Methodes    */
        void    makeSound() const;
    
    /*  Getter  */
        Brain *getBrain() const;

};

#endif