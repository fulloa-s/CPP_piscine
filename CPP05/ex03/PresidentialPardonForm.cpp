/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francesco <francesco@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:31:01 by francesco         #+#    #+#             */
/*   Updated: 2021/11/23 22:38:00 by francesco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(){}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm("Presidential Pardon", 25, 5), _target(target){}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj) : AForm(obj), _target(obj._target){}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &obj){

    (void)obj;
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(){}

bool PresidentialPardonForm::execute(Bureaucrat const & executor) const {
    
    if(this->check_ex(executor) == false)
        return (false);
    else
        std::cout << this->_target << " has been pardoned by Zafod Beeblebrox!" << std::endl;
    return (true);
}