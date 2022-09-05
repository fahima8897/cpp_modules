/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 16:58:04 by fboumell          #+#    #+#             */
/*   Updated: 2022/09/05 15:54:04 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
private:
    /* data */
public:

    /*  constructeur & destructeur  */
        Cat();
        virtual ~Cat();

    /*  constructeur de recopie */
        Cat(const Cat &src);

    /*  operateur d'affectation */
        Cat &operator=(const Cat &rhs);

    /*  Methodes    */
        void makeSound() const;
};

#endif