/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francesco <francesco@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:48:25 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/24 13:24:19 by francesco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main()
{
    try
    {
        Intern someRandomIntern;
        Bureaucrat Pino("Pino", 1);
        AForm* rrf;
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        std::cout << *rrf;
        Pino.signForm(*rrf);
        Pino.executeForm(*rrf);
        delete rrf;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;
    try
    {
        Intern someRandomIntern;
        Bureaucrat Pino("Pino", 1);
        AForm* rrf;
        rrf = someRandomIntern.makeForm("robotomelo request", "Bender");
        std::cout << *rrf;
        Pino.signForm(*rrf);
        Pino.executeForm(*rrf);
        delete rrf;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}