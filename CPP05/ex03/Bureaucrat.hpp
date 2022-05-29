/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francesco <francesco@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:18:29 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/23 23:09:33 by francesco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#   ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>
#include <exception>
#include "AForm.hpp"


class AForm;

class Bureaucrat
{
    const std::string _name;
    int _grade;

    public:
    
    class GradeTooHighException : public std::exception
    {
        virtual const char *what() const throw();   
    };
    class GradeTooLowException : public std::exception
    {
        virtual const char *what() const throw(); 
    };
    Bureaucrat();
    Bureaucrat(std::string const &name, int grade);
    Bureaucrat(Bureaucrat &obj);
    ~Bureaucrat();
    Bureaucrat& operator =(Bureaucrat &obj);
    const std::string   &getName() const;
    const int           &getGrade() const;
    void                incGrade();
    void                decGrade();
    void                signForm(AForm &obj) const;
    void                executeForm(AForm const & form) const;
};

std::ostream &operator <<(std::ostream &output, const Bureaucrat &obj);

#endif