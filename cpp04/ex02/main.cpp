/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 17:00:19 by fboumell          #+#    #+#             */
/*   Updated: 2022/09/07 19:24:21 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

#define PET_NUM 4

int main()
{

    AAnimal *pets[PET_NUM];
    

    /*  Shallow copy
    AAnimal *pet1 = pets[2];*/
    
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
    
    for (int i = 0; i < PET_NUM; i++)
    {
        pets[i]->getBrain()->ideas[0] = "You drive me craazyyy";
        pets[i]->getBrain()->ideas[1] = "I just can't sleep";
        pets[i]->getBrain()->ideas[2] = "I am so excited";
        pets[i]->getBrain()->ideas[3] = "I am in too deep";
    }
    
    for (int i = 0; i < PET_NUM; i++)
    {
        std::cout << pets[i]->getType() << " :" << pets[i]->getBrain()->ideas[0] << std::endl;
        std::cout << pets[i]->getType() << " :" << pets[i]->getBrain()->ideas[1] << std::endl;
        std::cout << pets[i]->getType() << " :" << pets[i]->getBrain()->ideas[2] << std::endl;
        std::cout << pets[i]->getType() << " :" << pets[i]->getBrain()->ideas[3] << std::endl;
    
        /*  Shallow copy
        std::cout << pet1->getType() << " :" << pet1->getBrain()->ideas[0] << std::endl;
        std::cout << pet1->getType() << " :" << pet1->getBrain()->ideas[1] << std::endl;
        std::cout << pet1->getType() << " :" << pet1->getBrain()->ideas[2] << std::endl;
        std::cout << pet1->getType() << " :" << pet1->getBrain()->ideas[3] << std::endl;*/
    }
    
    for (int i = 0; i < PET_NUM; i++)
        delete pets[i];
    return 0;
}