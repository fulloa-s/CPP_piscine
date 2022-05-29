/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 11:42:31 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/17 17:45:39 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#   ifndef BRAIN_H
# define BRAIN_H

#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>

class Brain
{
	private:

	std::string _ideas[100];

    public:

    Brain();
    ~Brain();
    Brain(const Brain &obj);
    Brain& operator =(const Brain &obj);
    void getIdeas();

};

#endif