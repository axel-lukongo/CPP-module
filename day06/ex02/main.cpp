/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 17:29:44 by alukongo          #+#    #+#             */
/*   Updated: 2022/12/03 23:04:59 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include"ClassA.hpp"
#include "ClassB.hpp"
#include "ClassC.hpp"

Base * generate(void){
	int i = rand() % 3;
	Base *ptr;
	switch (i)
	{
		case 0:
			ptr = new A;
			break;
		case 1:
			ptr = new B;
			break;
		case 2:
			ptr = new C;
			break;
	}
	return ptr;
}

void identify(Base* p){
	if (dynamic_cast<A *>(p))
		std::cout << "p istype of A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "p istype of B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "p istype of C" << std::endl;
	else
		std::cout << "i don't find type of p" << std::endl;
}

void identify(Base& p){
	try
	{
		dynamic_cast <A &> (p);
		std::cout << "p istype of A" << std::endl;
	}
	catch(const std::exception &bc)
	{
	}
	try
	{
		dynamic_cast <B &>(p);
		std::cout << "p istype of B" << std::endl;
	}
	catch(const std::exception &bc)
	{
	}
	try
	{
		dynamic_cast<C &>(p);
		std::cout << "p istype of C" << std::endl;
	}
	catch(const std::exception &bc)
	{
	}
}

int main(){

Base *ptr;
srand((unsigned)time(NULL));

for (int i = 0; i < 10; i++)
{
	ptr = generate();
	identify(ptr);
	identify(*ptr);
	delete ptr;
}

}