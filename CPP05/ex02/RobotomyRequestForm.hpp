/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francesco <francesco@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 13:20:26 by francesco         #+#    #+#             */
/*   Updated: 2021/11/23 23:24:16 by francesco        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#   ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H

#include "AForm.hpp"
#include <time.h>
#include <stdlib.h>
#include <unistd.h>

class RobotomyRequestForm : public AForm
{
    const std::string   _target;

    public:
    
    RobotomyRequestForm();
    RobotomyRequestForm(const std::string &target);
    RobotomyRequestForm(const RobotomyRequestForm &obj);
    RobotomyRequestForm &operator=(const RobotomyRequestForm &obj);
    ~RobotomyRequestForm();
    bool    execute(Bureaucrat const & executor) const;
};

#endif