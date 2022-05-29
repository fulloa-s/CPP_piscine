/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:18:29 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/19 12:57:17 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#   ifndef AMATERIA_H
# define AMATERIA_H

#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>
#include "ICharacter.hpp"

class AMateria
{
    protected:
    
    std::string _type;

    public:

    AMateria();
    AMateria(std::string const &type);
    virtual ~AMateria();
    AMateria(const AMateria &obj);
    AMateria& operator =(const AMateria &obj);
    std::string const &getType() const;
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter &target);
};

#endif