/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAAAnimal.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 14:46:36 by fboumell          #+#    #+#             */
/*   Updated: 2022/09/07 19:13:58 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_AANIMAL_HPP
# define WRONG_AANIMAL_HPP

#include <iomanip>
#include <iostream>

class WrongAAnimal
{
protected:

    std::string _type;
    
public:

    /*  constructeurs et destructeur  */
        WrongAAnimal();
        WrongAAnimal(std::string str);
        virtual ~WrongAAnimal();

        /*  constructeur de recopie */
        WrongAAnimal(const WrongAAnimal &src);

    /*  operateur d'affectation */
        WrongAAnimal &operator=(const WrongAAnimal &rhs);
    
    /*  getter  */
        std::string getType() const;

    /*  Methodes    */
        void    makeSound() const;
};




#endif