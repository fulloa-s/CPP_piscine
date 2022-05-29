/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francesco <francesco@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:31:01 by francesco         #+#    #+#             */
/*   Updated: 2021/11/23 22:38:00 by francesco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(){}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("Robotomy Request", 72, 45), _target(target){}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj) : AForm(obj), _target(obj._target){}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &obj){

    (void)obj;
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(){}

bool RobotomyRequestForm::execute(Bureaucrat const & executor) const{
    
    if(this->check_ex(executor) == false)
        return (false);
    else
    {
        srand(time(NULL));
        int _r = rand() % 2;
        std::cout << "zzzZZZZZzzzzzZZZZZZZzzzzzZZZZZZZZZZZZZZzzzzz" << std::endl;
        sleep(1);
        if(_r)
            std::cout << this->_target << " has been robotomized successfully!" << std::endl;
        else
            std::cout << this->_target << " robotization failed!" << std::endl;

    }
    return (true);
}