/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 17:00:19 by fboumell          #+#    #+#             */
/*   Updated: 2022/09/07 15:44:49 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

#define PET_NUM 3

int main()
{

    Animal *pets[PET_NUM];
    Dog *chien1 = new Dog();
    Dog *chien2 = new Dog;
    
    
    for (int i = 0; i < PET_NUM; i++)
    {
        if (i % 2 == 0)
        {
            pets[i] = new Cat();
            pets[i]->makeSound();
        }
        else
        {
            pets[i] = new Dog();
            pets[i]->makeSound();
        }
    }
    
    brain->ideas[0] = "You drive me craazyyy";
    brain->ideas[1] = "I just can't sleep";
    brain->ideas[2] = "I am so excited";
    brain->ideas[3] = "I am in too deep";
    
    
    for (int i = 0; i < PET_NUM; i++)
        delete pets[i];
    return 0;
}