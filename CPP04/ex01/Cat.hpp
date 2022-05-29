/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 10:18:01 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/17 17:56:57 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#   ifndef CAT_H
# define CAT_H

#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
    
    Brain *_brain;
        
    public:

    Cat();
    ~Cat();
    Cat(const Cat &obj);
    Cat& operator =(const Cat &obj);
    void makeSound() const;
    void three_idea();

};

#endif