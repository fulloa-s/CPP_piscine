/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francesco <francesco@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 11:43:35 by francesco         #+#    #+#             */
/*   Updated: 2021/11/24 13:22:17 by francesco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){}

Intern::Intern(const Intern &obj) {

    *this = obj;
}

Intern &Intern::operator=(const Intern &obj){

    (void)obj;
    return(*this);
}

Intern::~Intern(){}

AForm *Intern::makeForm(std::string const &f_name, std::string const &target){
    
    AForm *ptr[3] = { new ShrubberyCreationForm(target),
                      new RobotomyRequestForm(target), 
                      new PresidentialPardonForm(target)};
    
    std::string name[3] = { "shrubbery creation",
                            "robotomy request",
                            "presidential pardon"};
    
    int i = -1;
    while(++i < 3)
    {
        if(f_name == name[i])
            break;
    }
    if(i == 3)
    {
        for(int j = 0; j < 3; j++)
            delete ptr[j];
        throw Intern::NoFormfound();
    }
    for(int j = 0; j < 3; j++)
        if(j != i)
            delete ptr[j];
    std::cout << "Intern creates " << ptr[i]->getName() << std::endl;
    return(ptr[i]);
}

const char *Intern::NoFormfound::what() const throw(){

     return("Form not recognized");
}