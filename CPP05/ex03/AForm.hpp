/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francesco <francesco@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 19:19:36 by francesco         #+#    #+#             */
/*   Updated: 2021/11/24 12:53:32 by francesco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#   ifndef AFORM_H
# define AFORM_H

#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>
#include <exception>
#include <fstream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
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
    AForm();
    AForm(const std::string &name, int const grade_s, int const grade_ex);
    AForm(const AForm &obj);
    AForm &operator=(const AForm &obj);
    virtual ~AForm();
    const std::string   &getName() const;
    const int           &getGrade_s() const;
    const int           &getGrade_ex() const;
    const bool          &getSign()const;
    void                beSigned(const Bureaucrat &obj);
    bool                check_ex(Bureaucrat const &executor) const;
    virtual bool  execute(Bureaucrat const & executor) const = 0 ;
    
};

std::ostream &operator <<(std::ostream &output, const AForm &obj);

#endif