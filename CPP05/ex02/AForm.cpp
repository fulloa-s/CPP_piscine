/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francesco <francesco@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 19:19:41 by francesco         #+#    #+#             */
/*   Updated: 2021/11/23 18:08:30 by francesco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(): _name("Default"), _grade_s(150), _grade_ex(150) {

    this->_signed = false;
}

AForm::AForm(const std::string &name, int const grade_s, int const grade_ex) : _name(name), _grade_s(grade_s), _grade_ex(grade_ex) {

    this->_signed = false;
    if(this->_grade_s < 1|| this->_grade_ex < 1)
        throw AForm::GradeTooHighException();
    else if (this->_grade_s > 150|| this->_grade_ex > 150)
        throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm &obj) : _name(obj._name), _grade_s(obj._grade_s), _grade_ex(obj._grade_ex){

    this->_signed = obj._signed;
}

AForm &AForm::operator=(const AForm &obj){

    this->_signed = obj._signed;
    return(*this);
}

AForm::~AForm(){}

const char *AForm::GradeTooHighException::what() const throw(){

    return("Grade is too High");
}

const char *AForm::GradeTooLowException::what() const throw(){

    return("Grade is too Low");
}

const std::string &AForm::getName() const{
    
    return(this->_name);
}

const int &AForm::getGrade_ex() const{
    
    return(this->_grade_ex);
}

const int &AForm::getGrade_s() const{
    
    return(this->_grade_s);
}

const bool &AForm::getSign() const{
    
    return(this->_signed);
}

std::ostream &operator <<(std::ostream &output, const AForm &obj){

    std::string sign;
    
    if(obj.getSign() == false)
        sign = "is not signed!";
    else
        sign = "is signed!";

    output << "The " << obj.getName() << " form, needs " << obj.getGrade_s() << " grade to be signed and " << obj.getGrade_ex() << " grade to be executed and now " << sign << std::endl;
    
    return(output);
}

void AForm::beSigned(const Bureaucrat &obj){
    
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
           throw AForm::GradeTooLowException();
       }
}

bool AForm::check_ex(Bureaucrat const & executor) const {

    if(this->getSign() == false)
    {
        std::cout << "Form " << this->getName() << " is not signed!" << std::endl;
        return (false);
    }
    else if(executor.getGrade() > this->getGrade_ex())
    {
        std::cout << executor.getName() << " cannot execute " << this->getName() << " because ";
        throw AForm::GradeTooLowException();
    }
    return (true);
}
