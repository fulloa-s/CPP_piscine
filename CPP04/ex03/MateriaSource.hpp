/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 14:34:15 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/19 15:15:17 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#   ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    AMateria *memory[4];
    
    public:
    
    MateriaSource();
    MateriaSource(const MateriaSource &obj);
    MateriaSource& operator=(const MateriaSource &obj);
    ~MateriaSource();
    void learnMateria(AMateria *obj);
    AMateria* createMateria(std::string const & type);
};

#endif