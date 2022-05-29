/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 16:16:02 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/19 12:35:25 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#   ifndef CHARACTER_H
# define CHARACTER_H

#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{
    std::string _name;
    AMateria    *_materia[4];
    
    public:
    
    Character();
    ~Character();
    Character(const Character &obj);
    Character(std::string const &name);
    Character& operator= (const Character &obj);
    std::string const & getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
    void see_equip();
};


#endif