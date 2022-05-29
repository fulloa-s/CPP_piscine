/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francesco <francesco@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:20:26 by francesco         #+#    #+#             */
/*   Updated: 2021/11/23 23:24:12 by francesco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#   ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

#include "AForm.hpp"
#include <time.h>
#include <stdlib.h>
#include <unistd.h>

class PresidentialPardonForm : public AForm
{
    const std::string   _target;

    public:
    
    PresidentialPardonForm();
    PresidentialPardonForm(const std::string &target);
    PresidentialPardonForm(const PresidentialPardonForm &obj);
    PresidentialPardonForm &operator=(const PresidentialPardonForm &obj);
    ~PresidentialPardonForm();
    bool    execute(Bureaucrat const & executor) const;
};

#endif