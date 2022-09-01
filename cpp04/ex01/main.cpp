/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 17:00:19 by fboumell          #+#    #+#             */
/*   Updated: 2022/09/01 14:07:05 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

#define PET_NUM 2

int main()
{

    const Animal *pets[PET_NUM];
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
        delete pets[i];
    return 0;
}