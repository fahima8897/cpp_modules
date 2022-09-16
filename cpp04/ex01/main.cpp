/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 17:00:19 by fboumell          #+#    #+#             */
/*   Updated: 2022/09/16 14:23:43 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

#define PET_NUM 4

int main()
{
    Animal *pets[PET_NUM];
    
    std::cout << std::endl;
    
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
    
    std::cout << std::endl;
    std::cout << "--- Destructors ----" << std::endl;
    
    for (int i = 0; i < PET_NUM; i++)
        delete pets[i];
        
    std::cout << std::endl;
    std::cout << "---- Deep Copy ----" << std::endl;
    
    Dog dog1;
    Cat cat1;
    
    dog1.getBrain()->setIdea("You drive me craazyyy", 0);
    dog1.getBrain()->setIdea("I just can't sleep", 1);
    cat1.getBrain()->setIdea("I am so excited", 0);
    cat1.getBrain()->setIdea("I am in too deep", 1);
    
    Dog dog2 = dog1;
    Cat cat2 = cat1;

    std::cout << std::endl;
    std::cout << "---- adresses ----" << std::endl;
    
    std::cout << "adress of dog1 is : " << dog1.getBrain() << std::endl;
    std::cout << "adress of dog2 is : " << dog2.getBrain() << std::endl;
    std::cout << "adress of cat1 is : " << cat1.getBrain() << std::endl;
    std::cout << "adress of cat2 is : " << cat2.getBrain() << std::endl;
    
    std::cout << std::endl;
    std::cout << "---- Ideas ----" << std::endl;
    
    std::cout << "Dog1 idea one is : " << " :" << dog1.getBrain()->getIdeas(0) << std::endl;
    std::cout << "Dog2 idea one is : " << " :" << dog2.getBrain()->getIdeas(0) << std::endl;
    std::cout << "Dog1 idea two is : " << " :" << dog1.getBrain()->getIdeas(1) << std::endl;
    std::cout << "Dog2 idea two is : " << " :" << dog2.getBrain()->getIdeas(1) << std::endl;
    std::cout << "cat1 idea one is : " << " :" << cat1.getBrain()->getIdeas(0) << std::endl;
    std::cout << "cat2 idea one is : " << " :" << cat2.getBrain()->getIdeas(0) << std::endl;
    std::cout << "cat1 idea two is : " << " :" << cat1.getBrain()->getIdeas(1) << std::endl;
    std::cout << "cat2 idea two is : " << " :" << cat2.getBrain()->getIdeas(1) << std::endl;
    
    std::cout << std::endl;
    std::cout << "--- Destructors ----" << std::endl;

    // Dog dog3;
    // {
    //     Dog dog4 = dog3;
    // }
    
    return 0;
}

   