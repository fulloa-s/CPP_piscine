/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 15:03:53 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/18 12:56:04 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#   ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
    std::string _d_name;
    
    public:

    DiamondTrap();
    DiamondTrap(std::string name);
    DiamondTrap(const DiamondTrap &obj);
    ~DiamondTrap();
    DiamondTrap&    operator = (const DiamondTrap &obj);
    void    attack(std::string const &target);
    void    whoAmI();

    // using ScavTrap::attack; ALTRO METODO
};

#endif