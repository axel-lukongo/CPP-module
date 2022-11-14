/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 21:38:33 by alukongo          #+#    #+#             */
/*   Updated: 2022/11/14 01:32:01 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"

int main() {

// const Animal t1;
// const Dog dog1;
// const Cat cat1;
const Animal* meta = new Animal(); 
const Animal* j = new Dog();
const Animal* i = new Cat();

// std::cout << t1.getType() << " " << std::endl;
// t1.makeSound(); //will output the dog sound! j->makeSound();

// std::cout << dog1.getType() << " " << std::endl;
// dog1.makeSound(); //will output the cat sound! j->makeSound();

// std::cout << cat1.getType() << " " << std::endl;
// cat1.makeSound();


std::cout << j->getType() << "    ptr" << std::endl;
j->makeSound(); //will output the dog sound! j->makeSound();

std::cout << i->getType() << "     ptr" << std::endl;
i->makeSound(); //will output the cat sound! j->makeSound();

std::cout << meta->getType() << "     ptr" << std::endl;
meta->makeSound();

delete j;
delete i;
delete meta;
return 0; 
}
