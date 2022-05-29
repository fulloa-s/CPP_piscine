/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francesco <francesco@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:48:25 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/24 12:52:19 by francesco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    try
    {
        Bureaucrat Pino("Pino", 1);
        AForm *home = new ShrubberyCreationForm("home");
        AForm *Frango = new RobotomyRequestForm("Frango");
        AForm *Ciccio = new PresidentialPardonForm("Ciccio");

        Pino.signForm(*home);
        Pino.executeForm(*home);
        Pino.signForm(*Frango);
        Pino.executeForm(*Frango);
        Pino.signForm(*Ciccio);
        Ciccio->execute(Pino);

        delete home;
        delete Frango;
        delete Ciccio;
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    
    
   
}