/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francesco <francesco@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 11:36:43 by francesco         #+#    #+#             */
/*   Updated: 2021/11/24 13:10:39 by francesco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#   ifndef INTERN_H
# define INTERN_H

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
    public:
    
    class NoFormfound : public std::exception
    {
       virtual const char *what() const throw(); 
    };
    Intern();
    Intern(const Intern &obj);
    Intern &operator=(const Intern &obj);
    ~Intern();
    AForm    *makeForm(std::string const &f_name, std::string const &target);
};

#endif