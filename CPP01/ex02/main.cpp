/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fulloa-s <fulloa-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:42:44 by fulloa-s          #+#    #+#             */
/*   Updated: 2021/11/19 17:36:51 by fulloa-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>



void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}



int main()
{
	std::string brain = "HI THIS IS BRAIN";

	std::string *stringPTR = &brain;
	std::string &stringREF = brain;

	std::cout << "----------------------------------------------------------" << std::endl;
	
	std::cout << "LA STRINGA ---> " << brain << std::endl;
	std::cout << "INDIRIZZO DELLA STRINGA ---> " << &brain << std::endl;

	std::cout << "----------------------------------------------------------" << std::endl;

	std::cout << "STRINGA ALL'INTERNO DEL PUNTATORE ---> " << *stringPTR << std::endl;
	std::cout << "INDIRIZZO DEL PUNTATORE ---> " << &stringPTR << std::endl;

	std::cout << "----------------------------------------------------------" << std::endl;

	std::cout << "STRINGA ALL'INTERNO DELLA REFERENCE ---> " << stringREF << std::endl;
	std::cout << "INDIRIZZO DELLA REFERENCE ---> " << &stringREF << std::endl;

	std::cout << "----------------------------------------------------------" << std::endl;

	int a = 5;
	int b = 6;

	std::cout << "a = " << a << " b = " << b << " PRIMA DELLO SWAP" << std::endl;
	swap(a, b);
	std::cout << "a = " << a << " b = " << b << " DOPO LO SWAP" << std::endl;

	std::cout << "----------------------------------------------------------" << std::endl;
	
	// APPUNTI

	// 1) A pointer can be re-assigned: A reference cannot be re-bound, and must be bound at initialization:

	// 2) A pointer variable has its own identity: a distinct, visible memory address that can be taken with the unary & operator and a certain amount of space 
	// that can be measured with the sizeof operator. Using those operators on a reference returns a value corresponding to whatever the reference is bound to; 
	// the reference’s own address and size are invisible. Since the reference assumes the identity of the original variable in this way, it is convenient to think 
	// of a reference as another name for the same variable.

	// 3) You can have arbitrarily nested pointers to pointers offering extra levels of indirection. References only offer one level of indirection.

	// 4) A pointer can be assigned nullptr, whereas a reference must be bound to an existing object. If you try hard enough, you can bind a reference 
	// to nullptr, but this is undefined and will not behave consistently.

	// 5) Pointers can iterate over an array; you can use ++ to go to the next item that a pointer is pointing to, and + 4 to go to the 5th element. 
	// This is no matter what size the object is that the pointer points to.

	// 6) A pointer needs to be dereferenced with * to access the memory location it points to, whereas a reference can be used directly. A pointer 
	// to a class/struct uses -> to access its members whereas a reference uses a .

	// 7) References cannot be put into an array, whereas pointers can be (Mentioned by user @litb)

	// 8) Const references can be bound to temporaries. Pointers cannot (not without some indirection):
}


