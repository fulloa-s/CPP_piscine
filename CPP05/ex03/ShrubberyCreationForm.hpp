/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francesco <francesco@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:20:26 by francesco         #+#    #+#             */
/*   Updated: 2021/11/24 11:58:04 by francesco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#   ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

#include "AForm.hpp"

class ShrubberyCreationForm : virtual public AForm
{
    const std::string   _target;

    public:
    
    ShrubberyCreationForm();
    ShrubberyCreationForm(const std::string &target);
    ShrubberyCreationForm(const ShrubberyCreationForm &obj);
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &obj);
    ~ShrubberyCreationForm();
    bool    execute(Bureaucrat const & executor) const;
};

#endif