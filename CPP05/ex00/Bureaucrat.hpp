/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francesco <francesco@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:18:29 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/22 18:18:28 by francesco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#   ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>
#include <exception>

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
    const std::string &getName() const;
    const int &getGrade() const;
    void incGrade();
    void decGrade();
};

std::ostream &operator <<(std::ostream &output, const Bureaucrat &obj);

#endif