/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francesco <francesco@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 19:19:41 by francesco         #+#    #+#             */
/*   Updated: 2021/11/23 17:12:44 by francesco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): _name("Default"), _grade_s(150), _grade_ex(150) {

    this->_signed = false;
}

Form::Form(const std::string &name, int const grade_s, int const grade_ex) : _name(name), _grade_s(grade_s), _grade_ex(grade_ex) {

    this->_signed = false;
    if(this->_grade_s < 1|| this->_grade_ex < 1)
        throw Form::GradeTooHighException();
    else if (this->_grade_s > 150|| this->_grade_ex > 150)
        throw Form::GradeTooLowException();
}

Form::Form(const Form &obj) : _name(obj._name), _grade_s(obj._grade_s), _grade_ex(obj._grade_ex){

    this->_signed = obj._signed;
}

Form &Form::operator=(const Form &obj){

    this->_signed = obj._signed;
    return(*this);
}

Form::~Form(){}

const char *Form::GradeTooHighException::what() const throw(){

    return("Grade is too High");
}

const char *Form::GradeTooLowException::what() const throw(){

    return("Grade is too Low");
}

const std::string &Form::getName() const{
    
    return(this->_name);
}

const int &Form::getGrade_ex() const{
    
    return(this->_grade_ex);
}

const int &Form::getGrade_s() const{
    
    return(this->_grade_s);
}

const bool &Form::getSign() const{
    
    return(this->_signed);
}

std::ostream &operator <<(std::ostream &output, const Form &obj){

    std::string sign;
    
    if(obj.getSign() == false)
        sign = "is not signed!";
    else
        sign = "is signed!";

    output << "The " << obj.getName() << " form, needs " << obj.getGrade_s() << " grade to be signed and " << obj.getGrade_ex() << " grade to be executed and now " << sign << std::endl;
    
    return(output);
}

void Form::beSigned(const Bureaucrat &obj){
    
    if(this->_signed == true)
    {
        std::cout << "Form " << this->getName() << " already signed!" << std::endl;
        return ;
    }
    else if(obj.getGrade() <= this->getGrade_s())
    {
        this->_signed = true;
        std::cout << "Form " << this->getName() << " signed by " << obj.getName() << "!" << std::endl;
    }
    else
    {
        std::cout <<  obj.getName() << " cannot sign " << this->getName() << " because ";
        throw Form::GradeTooLowException();
    }
}
