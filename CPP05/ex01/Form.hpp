/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francesco <francesco@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 19:19:36 by francesco         #+#    #+#             */
/*   Updated: 2021/11/23 16:53:52 by francesco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#   ifndef FORM_H
# define FORM_H

#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form 
{
    const std::string   _name;
    const int           _grade_s;
    const int           _grade_ex;
    bool                _signed;

    public:

    class GradeTooHighException : public std::exception
    {
        virtual const char *what() const throw();   
    };
    class GradeTooLowException : public std::exception
    {
        virtual const char *what() const throw(); 
    };
    Form();
    Form(const std::string &name, int const grade_s, int const grade_ex);
    Form(const Form &obj);
    Form &operator=(const Form &obj);
    ~Form();
    const std::string   &getName() const;
    const int           &getGrade_s() const;
    const int           &getGrade_ex() const;
    const bool          &getSign()const;
    void                beSigned(const Bureaucrat &obj);
    
};

std::ostream &operator <<(std::ostream &output, const Form &obj);

#endif