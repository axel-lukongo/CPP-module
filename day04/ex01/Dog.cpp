/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 21:05:54 by alukongo          #+#    #+#             */
/*   Updated: 2022/11/17 21:41:32 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog(){
	std::cout << "Dog default constructor has been called" << std::endl;
	_brain = new Brain();
	_brain->set_ideas();
	_type = "Dog";
}

Dog::Dog(std::string n){
	std::cout << "Dog constructor has been called" << std::endl;
	_brain = new Brain();
	_brain->set_ideas();
	_type = "Dog";
}

Dog::Dog(const Dog & ins): Animal(ins)
{
	std::cout << "Dog copy constructor has been called" << std::endl;
	_type = ins._type;
	_brain = new Brain(*ins._brain);
}

Dog & Dog::operator=(const Dog & ins)
{
	std::cout << "Dog assign constructor has been called" << std::endl;
	if (this == &ins)
		return *this;
	this->_type = ins._type;
	this->_brain = new Brain(*ins._brain);
	// *this->_brain = *ins._brain;
	return *this;
}

Dog::~Dog(){
	delete _brain;
	std::cout << "Dog destructor has been called" << std::endl;
}



void Dog:: makeSound() const{
	std::cout << "wouf wouf" << std::endl << std::endl;
}

Brain& Dog::getBrain(){
	return *_brain;
}

const std::string & Dog::getType() const{
	return(_type);
}