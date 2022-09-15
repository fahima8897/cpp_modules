/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 17:00:19 by fboumell          #+#    #+#             */
/*   Updated: 2022/09/15 16:55:02 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

#define PET_NUM 4

// int main()
// {

//     Animal *pets[PET_NUM];

//     /*  Shallow copy */
//     // Animal *pet1 = pets[3];
    
//     for (int i = 0; i < PET_NUM; i++)
//     {
//         if (i % 2 == 0)
//         {
//             pets[i] = new Cat();
//             pets[i]->makeSound();
//         }
//         else
//         {
//             pets[i] = new Dog();
//             pets[i]->makeSound();
//         }
//     }
    
//     for (int i = 0; i < PET_NUM; i++)
//     {
//         pets[i]->getBrain()->setIdea("You drive me craazyyy", 0);
//         pets[i]->getBrain()->setIdea("I just can't sleep", 1);
//         pets[i]->getBrain()->setIdea("I am so excited", 2);
//         pets[i]->getBrain()->setIdea("I am in too deep", 3);
//     }
    
//     std::cout << std::endl;
//     std::cout << std::endl;
    
//     for (int i = 0; i < PET_NUM; i++)
//     {
//         std::cout << pets[i]->getType() << " :" << pets[i]->getBrain()->getIdeas(0) << std::endl;
//         std::cout << pets[i]->getType() << " :" << pets[i]->getBrain()->getIdeas(1) << std::endl;
//         std::cout << pets[i]->getType() << " :" << pets[i]->getBrain()->getIdeas(2) << std::endl;
//         std::cout << pets[i]->getType() << " :" << pets[i]->getBrain()->getIdeas(3) << std::endl;
    
//         /*  Shallow copy */
//         // std::cout << pet1->getType() << " :" << pet1->getBrain()->getIdeas(0) << std::endl;
//         // std::cout << pet1->getType() << " :" << pet1->getBrain()->getIdeas(1) << std::endl;
//         // std::cout << pet1->getType() << " :" << pet1->getBrain()->getIdeas(2) << std::endl;
//         // std::cout << pet1->getType() << " :" << pet1->getBrain()->getIdeas(3) << std::endl;
//     }

//     std::cout << std::endl;
//     std::cout << std::endl;
    
//     for (int i = 0; i < PET_NUM; i++)
//         delete pets[i];
//     return 0;
// }

int main()
{
    // Animal  *pets[PET_NUM];
    // Dog *dog1 = new Dog();
    // Dog *dog2;
    
    Dog dog3;
    Dog dog4;

    dog4 = dog3; 

    // dog2 = dog1;

    // for (int i = 0; i < PET_NUM; i++)
    // {
    //     if (i % 2 == 0)
    //     {
    //         pets[i] = new Cat();
    //         pets[i]->makeSound();
    //     }
    //     else 
    //     {
    //         pets[i] = new Dog();
    //         pets[i]->makeSound();
    //     }
    // }

    // std::cout << "adress of dog1 is : " << dog1->getBrain() << std::endl;
    // std::cout << "adress of dog2 is : " << dog2->getBrain() << std::endl;
    std::cout << "adress of dog3 is : " << dog3.getBrain() << std::endl;
    std::cout << "adress of dog4 is : " << dog4.getBrain() << std::endl;
    
    // delete dog1;
    // delete dog2;
     
    
}