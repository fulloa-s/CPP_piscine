/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:19:54 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/17 16:29:09 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#   ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:

    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap &obj);
    ~ScavTrap();
    ScavTrap&    operator = (const ScavTrap &obj);
    void	attack(std::string const & target);
    void    guardGate();

};

#endif