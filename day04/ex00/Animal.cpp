/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 21:43:22 by alukongo          #+#    #+#             */
/*   Updated: 2022/11/13 16:04:30 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Animal.hpp"

Animal::Animal(){
	std::cout << "Animal default constructor has been called" << std::endl;
	_type = "Animal";
}

Animal::Animal(std::string n){
	std::cout << "Animal constructor has been called" << std::endl;
	_type = "Animal";
}

Animal::Animal(const Animal & ins)
{
	std::cout << "Animal copy constructor has been called" << std::endl;
	*this = ins;
}

Animal & Animal::operator=(const Animal & ins)
{
	std::cout << "Animal assign constructor has been called" << std::endl;
	if (this == &ins)
		return *this;
	_type = ins._type;
	return *this;
}

Animal::~Animal(){
	std::cout << "Animal destructor has been called" << std::endl;
}

void Animal::makeSound() const{
	std::cout << "animal have no song"<< std::endl << std::endl;
}

std::string Animal::getType(){
	return(_type);
}

const std::string & Animal::getType() const{
	return(_type);
}