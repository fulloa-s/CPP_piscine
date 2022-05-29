/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 14:48:25 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/29 14:44:03 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main()
{
    {
        int a = 5;
        int b = 3;
    
        std::cout << "BEFORE SWAP: A = " << a << " B = " << b << std::endl;
        swap<int>(a,b);
        std::cout << "AFTER  SWAP: A = " << a << " B = " << b << std::endl;
    }
    std::cout << std::endl;
    {
        char a = 'a';
        char b = 'b';
    
        std::cout << "BEFORE SWAP: A = " << a << " B = " << b << std::endl;
        swap<char>(a,b);
        std::cout << "AFTER  SWAP: A = " << a << " B = " << b << std::endl;
    }
    std::cout << std::endl;
    {
        int a = 5;
        int b = 3;
    
        std::cout << "ARGS: A = " << a << " B = " << b << std::endl;
        std::cout << "RETURN OF MIN FUNCTION: " << min<int>(a,b) << std::endl;
    }
    std::cout << std::endl;
    {
        int a = 5;
        int b = 3;
    
        std::cout << "ARGS: A = " << a << " B = " << b << std::endl;
        std::cout << "RETURN OF MAX FUNCTION: " << max<int>(a,b) << std::endl;
    }
    std::cout << std::endl;
    std::cout << std::endl;
    {
        int a = 2;
        int b = 3;
        ::swap( a, b );
        std::cout << "a = " << a << ", b = " << b << std::endl;
        std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
        std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
        std::string c = "chaine1";
        std::string d = "chaine2";
        ::swap(c, d);
        std::cout << "c = " << c << ", d = " << d << std::endl;
        std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
        std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    }
    // std::cout << std::endl;
    // std::cout << std::endl;
    // {
    //     Awesome a(2), b(4);
    //     swap(a,b);

    //     std::cout << a << " " << b << std::endl;
    //     std::cout << max(a, b) << std::endl;
    //     std::cout << min(a, b) << std::endl;
    //      return (0);
    // }

}