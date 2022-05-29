/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francesco <francesco@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:48:25 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/22 18:42:53 by francesco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    /////////////////////////////////// COSTRUCTOR HIGH
    try
    {
        Bureaucrat Pino("Pino", 0);
        std::cout << Pino;
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    /////////////////////////////////// CONSTRUCTOR LOW
    try
    {
        Bureaucrat Pino("Pino", 151);
        std::cout << Pino;
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    /////////////////////////////////// INCREMENT HIGH
    try
    {
        Bureaucrat Pino("Pino", 1);
        std::cout << Pino;
        Pino.incGrade();
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    /////////////////////////////////// INCREMENT LOW
    try
    {
        Bureaucrat Pino("Pino", 150);
        std::cout << Pino;
        Pino.decGrade();
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;
    /////////////////////////////////// OK
    try
    {
        Bureaucrat Pino("Pino", 5);
        std::cout << Pino;
        Pino.decGrade();
        Pino.decGrade();
        std::cout << Pino;
        Pino.incGrade();
        std::cout << Pino;
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }    
}