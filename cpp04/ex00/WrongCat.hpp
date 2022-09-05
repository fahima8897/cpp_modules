/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 16:06:29 by fboumell          #+#    #+#             */
/*   Updated: 2022/09/05 16:05:39 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
private:
    /* data */
public:

    /*  constructeur & destructeur  */
        WrongCat();
        virtual ~WrongCat();

    /*  constructeur de recopie */
        WrongCat(const WrongCat &src);

    /*  operateur d'affectation */
        WrongCat &operator=(const WrongCat &rhs);

    /*  Methodes    */
        void makeSound() const;
};

#endif