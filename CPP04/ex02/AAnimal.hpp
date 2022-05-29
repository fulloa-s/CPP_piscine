/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:18:29 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/18 11:08:30 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#   ifndef AANIMAL_H
# define AANIMAL_H

#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>

class AAnimal
{
    protected:
    
    std::string type;

    public:

    AAnimal();
    virtual ~AAnimal();
    AAnimal(const AAnimal &obj);
    AAnimal& operator =(const AAnimal &obj);
    std::string getType() const;
    virtual void makeSound() const = 0;
    

};

#endif