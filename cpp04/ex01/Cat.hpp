/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 16:58:04 by fboumell          #+#    #+#             */
/*   Updated: 2022/08/26 13:21:35 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
    
    Brain *_brain;
    
public:

    /*  constructeur & destructeur  */
        Cat();
        ~Cat();

    /*  constructeur de recopie */
        Cat(const Cat &src);

    /*  operateur d'affectation */
        Cat &operator=(const Cat &rhs);

    /*  Methodes    */
        void makeSound() const;
};

#endif