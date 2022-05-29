/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francesco <francesco@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 18:36:51 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/23 23:26:14 by francesco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){}

Bureaucrat::Bureaucrat(std::string const &name, int grade) : _name(name){

    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->_grade = grade; 
}

Bureaucrat::Bureaucrat(Bureaucrat &obj): _name(obj._name){

    *this = obj;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat &obj){

    this->_grade = obj._grade;
    return(*this);
}

Bureaucrat::~Bureaucrat(){};

const std::string &Bureaucrat::getName() const{

    return(this->_name);
}

const int &Bureaucrat::getGrade() const{

    return(this->_grade);
}

void Bureaucrat::incGrade(){

    if(this->_grade == 1)
        throw Bureaucrat::GradeTooHighException();
    else
        this->_grade--;
}

void Bureaucrat::decGrade(){

    if(this->_grade == 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->_grade++;
}

const char *Bureaucrat::GradeTooHighException::what() const throw(){
            
    return("Grade is too High");
}

const char *Bureaucrat::GradeTooLowException::what() const throw(){
            
    return("Grade is too Low");
}  

std::ostream &operator <<(std::ostream &output, const Bureaucrat &obj){

    output << obj.getName() <<", bureaucrat grade " << obj.getGrade() << std::endl;
    
    return(output);
}

void    Bureaucrat::signForm(AForm &obj) const {

    obj.beSigned(*this);
}

void    Bureaucrat::executeForm(AForm const & form) const{

    if(form.execute(*this) == true)
        std::cout << this->_name << " executes " << form.getName() << " Form!" << std::endl;
}