/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francesco <francesco@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:31:01 by francesco         #+#    #+#             */
/*   Updated: 2021/11/24 11:32:45 by francesco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(){}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("Shrubbery Creation", 145, 137), _target(target){}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj) : AForm(obj), _target(obj._target){}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj){

    (void)obj;
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

bool ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
    
    if(this->check_ex(executor) == false)
        return (false);
    else
    {
        std::ofstream fd_o;
        std::string _trees[10];
        
        _trees[0] = "               ,@@@@@@@,\n";
        _trees[1] = "       ,,,.   ,@@@@@@/@@,  .oo8888o.\n";
        _trees[2] = "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n";
        _trees[3] = "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n";
        _trees[4] = "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n";
        _trees[5] = "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n";
        _trees[6] = "   `&%\\ ` /%&'    |.|        \\ '|8'\n";
        _trees[7] = "       |o|        | |         | |\n";
        _trees[8] = "       |.|        | |         | |\n";
        _trees[9] = "    \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_\n";

        std::string tmp = this->_target + "_shrubbery";
        fd_o.open(tmp.c_str());
	    if(!fd_o.is_open())
	    {
	    	std::cout << "ERROR WITH CREATED FILE" << std::endl;
	    	exit (1);
	    }
        for(int i = 0; i < 10; i++)
        {
            fd_o << _trees[i];
        }   
	    fd_o.close();
    }
    return (true);
}