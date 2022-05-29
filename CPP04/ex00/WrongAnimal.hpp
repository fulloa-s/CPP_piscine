/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:18:29 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/17 11:24:47 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#   ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>

class WrongAnimal
{
    protected:
    
    std::string type;

    public:

    WrongAnimal();
    ~WrongAnimal();
    // virtual ~WrongAnimal(){};
    WrongAnimal(const WrongAnimal &obj);
    WrongAnimal& operator =(const WrongAnimal &obj);
    std::string getType() const;
    void makeSound() const;
    

};

#endif