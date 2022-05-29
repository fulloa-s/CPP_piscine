/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:48:25 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/29 15:51:59 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
    std::string testo[3] = { "primo", "secondo", "terzo"};
    int numbers[5] = { 1, 2, 3, 4, 5};
    char letters[4] = {'a', 'b', 'c', 'd'};

    std::cout << std::endl;
    iter(testo, 3, print);
    std::cout << std::endl;
    iter(numbers, 5, print);
    std::cout << std::endl;
    iter(letters, 4, print);

    // int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
    // Awesome tab2[5];
    // iter( tab, 5, print );
    // iter( tab2, 5, print );
    
    return 0;

}