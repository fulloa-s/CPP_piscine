/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:20:11 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/17 16:27:04 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#   ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>

class ClapTrap
{

    protected: 
    
    std::string _name;
    int _hit_points;
    int _energy_points;
    int _attack_damage;

    public:

    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap &obj);
    ~ClapTrap();
    ClapTrap    &operator = (const ClapTrap &obj);
    void    attack(std::string const &target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);

};

#endif