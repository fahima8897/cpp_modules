/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 17:00:19 by fboumell          #+#    #+#             */
/*   Updated: 2022/09/14 14:58:39 by fboumell         ###   ########.fr       */
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
        pets[i]->getBrain()->setIdea("You drive me craazyyy", 0);
        pets[i]->getBrain()->setIdea("I just can't sleep", 1);
        pets[i]->getBrain()->setIdea("I am so excited", 2);
        pets[i]->getBrain()->setIdea("I am in too deep", 3);
    }
    
    std::cout << std::endl;
    std::cout << std::endl;
    
    for (int i = 0; i < PET_NUM; i++)
    {
        std::cout << pets[i]->getType() << " :" << pets[i]->getBrain()->getIdeas(0) << std::endl;
        std::cout << pets[i]->getType() << " :" << pets[i]->getBrain()->getIdeas(1) << std::endl;
        std::cout << pets[i]->getType() << " :" << pets[i]->getBrain()->getIdeas(2) << std::endl;
        std::cout << pets[i]->getType() << " :" << pets[i]->getBrain()->getIdeas(3) << std::endl;
    
    }

    std::cout << std::endl;
    std::cout << std::endl;
    
    for (int i = 0; i < PET_NUM; i++)
        delete pets[i];
    return 0;
}