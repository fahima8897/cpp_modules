/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 16:58:04 by fboumell          #+#    #+#             */
/*   Updated: 2022/09/07 19:12:54 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
private:
    
        Brain   *_brain;
    
public:

    /*  constructeur & destruceur   */
        Cat();
        virtual ~Cat();
        
    /*  constructeur de recopie */
        Cat(const Cat &src);

    /*  operateur d'affectation */
        AAnimal &operator=(const Cat &rhs);

    /*  Methodes    */
        void    makeSound() const;
    
    /*  Getter  */
        Brain *getBrain() const;

};

#endif