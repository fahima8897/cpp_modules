/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 16:52:20 by fboumell          #+#    #+#             */
/*   Updated: 2022/09/07 19:16:28 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iomanip>
#include <iostream>
#include "Brain.hpp"

class AAnimal
{
protected:
    
    std::string type;
    
public:

    /* constructeurs & destructeur  */
        AAnimal();
        AAnimal(std::string str);
        virtual ~AAnimal();

    /*  constructeur de recopie */
        AAnimal(const AAnimal &src);

    /*  operateur d'affectation */
        AAnimal &operator=(const AAnimal &rhs);
    
    /*  getter  */
        std::string getType() const;

    /*  Methodes    */
        virtual void    makeSound() const = 0;
        virtual Brain *getBrain() const = 0;
        
};

#endif