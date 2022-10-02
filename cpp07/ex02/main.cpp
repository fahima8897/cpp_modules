/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 19:07:18 by fboumell          #+#    #+#             */
/*   Updated: 2022/10/02 17:09:26 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <time.h>
#include <stdlib.h>

int main() 
{

    Array<int>	EmptyArr;
    std::cout << "size of Emptyarray : " << EmptyArr.size() << std::endl;
    
    std::cout << std::endl;
    
    Array<std::string> strArray(3);
    strArray[0] = "begin";
    strArray[1] = "middle";
    strArray[2] = "end";
    
    unsigned int size;
    size = strArray.size();
    std::cout << "---- strArray values ----" << std::endl; 
    for (unsigned int i = 0; i < size; i++)
        std::cout << "strArray[" << i << "] : " << strArray[i] << std::endl; 
 
    std::cout << std::endl;

    std::cout << "---- Index invalide ----" << std::endl;
    try { std::cout << strArray[42] << '\n'; }
    catch (std::exception &e){ std::cout << e.what() << '\n'; }

    std::cout << std::endl;
    
    //copie de strArray
    Array<std::string> copy = strArray;
    copy[1] = "other";
    size = copy.size();
    std::cout << "---- copy values ----" << std::endl;
    for (unsigned int i = 0; i < size; i++)
        std::cout << "copy[" << i << "] : " << copy[i] << " " << std::endl;
    
    std::cout << std::endl;
    std::cout << "---- strArray without modification after copy ----" << std::endl;
    for (unsigned int i = 0; i < size; i++)
        std::cout << "strArray[" << i << "] : " << strArray[i] << std::endl; 
    std::cout << std::endl;
 
    return 0;
}

// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }