/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 14:46:36 by fboumell          #+#    #+#             */
/*   Updated: 2022/09/05 14:55:35 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

#include <iomanip>
#include <iostream>

class WrongAnimal
{
protected:

    std::string _type;
    
public:

    /*  constructeurs et destructeur  */
        WrongAnimal();
        WrongAnimal(std::string str);
        virtual ~WrongAnimal();

        /*  constructeur de recopie */
        WrongAnimal(const WrongAnimal &src);

    /*  operateur d'affectation */
        WrongAnimal &operator=(const WrongAnimal &rhs);
    
    /*  getter  */
        std::string getType() const;

    /*  Methodes    */
        void    makeSound() const;
};




#endif