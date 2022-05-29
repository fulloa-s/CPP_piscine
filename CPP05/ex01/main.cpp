/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francesco <francesco@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:48:25 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/23 17:03:03 by francesco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main()
{
    /////TEST FAIL FORM LEVELS SIGN
    try
    {
        Bureaucrat Pino("Pino", 3);
        Form A("104", 0, 5);
        std::cout << A;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        Bureaucrat Pino("Pino", 3);
        Form A("104", 5, 151);
        std::cout << A;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;
    /////TEST OK FORM + OVERLOAD <<
    try
    {
        Bureaucrat Pino("Pino", 3);
        Form A("104", 5, 150);
        std::cout << A;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;
    // /////TEST OK FIRMA <<
    try
    {
        Bureaucrat Mario("Mario", 3);
        Form A("104", 5, 150);
        std::cout << A;
        A.beSigned(Mario);
        std::cout << A;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;
    /////TEST FAIL FIRMA <<
    try
    {
        Bureaucrat Mario("Mario", 6);
        Form A("104", 5, 150);
        std::cout << A;
        A.beSigned(Mario);
        std::cout << A;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;
    /////TEST Gia Firmato <<
    try
    {
        Bureaucrat Mario("Mario", 5);
        Form A("104", 5, 150);
        std::cout << A;
        A.beSigned(Mario);
        std::cout << A;
        A.beSigned(Mario);
        std::cout << A;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;
    /////TEST SIGN FROM BURE <<
    try
    {
        Bureaucrat Mario("Mario", 5);
        Form A("104", 5, 150);
        std::cout << A;
        Mario.signForm(A);
        std::cout << A;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;
    /////TEST FAIL SIGN FROM BURE <<
    try
    {
        Bureaucrat Mario("Mario", 6);
        Form A("104", 5, 150);
        std::cout << A;
        Mario.signForm(A);
        std::cout << A;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;
    /////TEST FAIL SIGN già firmato <<
    try
    {
        Bureaucrat Mario("Mario", 1);
        Bureaucrat Ciccio("Ciccio", 1);
        Form A("104", 5, 150);
        std::cout << A;
        Mario.signForm(A);
        std::cout << A;
        Ciccio.signForm(A);
        std::cout << A;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;

}