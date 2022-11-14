/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 21:05:48 by alukongo          #+#    #+#             */
/*   Updated: 2022/11/14 02:03:21 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat(){
	std::cout << "Cat default constructor has been called" << std::endl;
	_brain = new Brain();
	_type = "Cat";
}

Cat::Cat(std::string n){
	std::cout << "Cat constructor has been called" << std::endl;
	_brain = new Brain();
	_type = "Cat";
}

Cat::Cat(const Cat & ins)
{
	std::cout << "Cat copy constructor has been called" << std::endl;
	*this = ins;
	// _type = "Cat";
}

Cat & Cat::operator=(const Cat & ins)
{
	std::cout << "Cat assign constructor has been called" << std::endl;
	if (this == &ins)
		return *this;
	_type = ins._type;
	return *this;
}


Cat::~Cat(){
	std::cout << "Cat destructor has been called" << std::endl;
	delete _brain;
}


void Cat:: makeSound() const{
	std::cout << "miiiaouuu" << std::endl << std::endl;
}

Brain& Cat::getBrain(){
	return *_brain;
}


const std::string & Cat::getType() const{
	// std::cout << "copy constructor has been called" <<std::endl;
	return(_type);
}
