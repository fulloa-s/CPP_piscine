/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:48:25 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/26 15:50:14 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


Base *generate()
{
    Base *ptr;
    srand(time(NULL));
    int _r = rand() % 3;
    switch (_r)
    {
    case 0:
       ptr = new A();
        return(ptr);
    case 1:
       ptr = new B();
        return(ptr);
    default:
       ptr = new C();
        return(ptr);
    }
}



void identify(Base *ptr)
{
    if(dynamic_cast<A*>(ptr) != NULL)
    {
        std::cout << "This is A *ptr" << std::endl;
        return ;
    }
    if(dynamic_cast<B*>(ptr)!= NULL)
    {
        std::cout << "This is B *ptr" << std::endl;
        return;
    }
    if(dynamic_cast<C*>(ptr)!= NULL)
    {
        std::cout << "This is C *ptr" << std::endl;
        return;
    }
}

void identify(Base& ptr)
{
    try
    {
        A &test = dynamic_cast<A&>(ptr);
        std::cout << "This is A &ptr " << &test << std::endl;
    }
    catch(const std::exception& e)
    {
        try
        {
            B &test = dynamic_cast<B&>(ptr);
            std::cout << "This is B &ptr" << &test << std::endl;
        }
        catch(const std::exception& e)
        {
           try
           {
                C &test = dynamic_cast<C&>(ptr);
                std::cout << "This is C &ptr" << &test << std::endl;
           }
           catch(const std::exception& e)
           {
               std::cerr << e.what() << '\n';
           }
        }
        
    }
    
}


int main()
{
    Base *ptr = generate();
    identify(ptr);
    identify(*ptr);
    delete ptr;
    
}