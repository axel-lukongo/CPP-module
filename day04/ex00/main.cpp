/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 21:38:33 by alukongo          #+#    #+#             */
/*   Updated: 2022/11/17 19:36:33 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"

int main() {

// const Animal t1;
// const Dog dog1;
// const Cat cat1;
const Animal* meta = new Animal(); 
const Animal* j = new Dog();
const Animal* i = new Cat();

std::cout << j->getType() << "    ptr" << std::endl;
j->makeSound(); //will output the dog sound! j->makeSound();

std::cout << i->getType() << "     ptr" << std::endl;
i->makeSound(); //will output the cat sound! j->makeSound();

std::cout << meta->getType() << "     ptr" << std::endl;
meta->makeSound();

delete j;
delete i;
delete meta;

const WrongAnimal *a = new WrongAnimal();
const WrongAnimal *l = new WrongDog();
const WrongAnimal *k = new WrongCat();
const WrongCat test;
std::cout << std::endl;
std::cout << l->getType() << " " << std::endl;
std::cout << k->getType() << " " << std::endl;
std::cout << test.getType() << " " << std::endl;
l->makeSound();
k->makeSound();
a->makeSound();
test.makeSound();
return 0; 
}
