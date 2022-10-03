/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboumell <fboumell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 12:00:06 by fboumell          #+#    #+#             */
/*   Updated: 2022/10/03 17:24:29 by fboumell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int main()
{
    {
        std::cout << "--- Test with MutantStack ---" << std::endl;
        
        MutantStack<int> mstack;
        std::cout << "Filling the stack with 5 and 17" << std::endl;
        mstack.push(5);
        mstack.push(17);
        std::cout << "The top of the stack is : " << mstack.top() << std::endl;
        mstack.pop();
        std::cout << "Size of the stack after removing the top : " << mstack.size() << std::endl;
        std::cout << "Pushing 3, 5, 737 and 0 to the stack" << std::endl;
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        mstack.push(0);
        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
        ++it;
        --it;
        std::cout << "Elements in the stack from the bottom to the top : " << std::endl;
        while (it != ite)
        {
            std::cout << "-> " << *it << std::endl;
            ++it;
        }
        std::stack<int> s(mstack);
    }
    
    std::cout << std::endl;
    std::cout << "--- Test with list ---" << std::endl;
    
    {
        std::list<int> mstack;
        std::cout << "Filling the list with 5 and 17" << std::endl;
        mstack.push_back(5);
        mstack.push_back(17);
        std::cout << "The top of the list is : " << mstack.back() << std::endl;
        mstack.pop_back();
        std::cout << "Size of the list after removing the top : " << mstack.size() << std::endl;
        std::cout << "Pushing 3, 5, 737 and 0 to the list" << std::endl;
        mstack.push_back(3);
        mstack.push_back(5);
        mstack.push_back(737);
        mstack.push_back(0);
        std::list<int>::iterator it = mstack.begin();
        std::list<int>::iterator ite = mstack.end();
        ++it;
        --it;
        std::cout << "Elements in the list from the front to the back : " << std::endl;
        while (it != ite)
        {
            std::cout << "-> " << *it << std::endl;
            ++it;
        }
    }

    return 0;    
}