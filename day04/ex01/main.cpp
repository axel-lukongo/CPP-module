/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 21:38:33 by alukongo          #+#    #+#             */
/*   Updated: 2022/11/17 21:40:44 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include"Brain.hpp"

int main()
{

	//************deep copy************//
	Dog basic;
	{
		Dog tmp = basic;
	}
	//************deep copy************//
	Animal* animals_array[10];
	for(int i; i < 10; i++){
		if (i < 5)
			animals_array[i] = new Cat;
		else
			animals_array[i] = new Dog;
		}
	for(int i; i < 10; i++)
		delete animals_array[i];
	
	std::cout << std::endl << "other tast: "<< std::endl << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << std::endl << std::endl;
	std::cout << i->getType() << std::endl << std::endl;
	
	Cat cat1;
	Cat cat2(cat1);
	std::cout << cat1.getBrain() << std::endl << std::endl;
	std::cout << cat2.getBrain() << std::endl << std::endl;
	
	delete j;
	delete i;

	return(1);
}

