/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 21:38:33 by alukongo          #+#    #+#             */
/*   Updated: 2022/11/14 02:07:29 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include"Brain.hpp"

int main()
{
	Animal* animals_array[10];
	for(int i; i < 10; i++){
		if (i < 5)
			animals_array[i] = new Cat;
		else
			animals_array[i] = new Dog;
		}
	for(int i; i < 10; i++)
		delete animals_array[i];
	
	std::cout << std::endl << std::endl;
	Cat *cat1 = new Cat();
	std::cout << cat1->getBrain() << std::endl << std::endl;
	delete cat1;

	return(1);
}

