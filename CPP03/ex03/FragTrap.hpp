/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:45:52 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/26 10:51:49 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#   ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>
#include "ScavTrap.hpp"

class FragTrap : public virtual ClapTrap
{
    public:

    FragTrap();
    FragTrap(std::string name);
    FragTrap(const FragTrap &obj);
    ~FragTrap();
    FragTrap&    operator = (const FragTrap &obj);
	void	highFivesGuys(void);
    void	attack(std::string const & target);

};

#endif