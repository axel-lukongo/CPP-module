/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 21:43:22 by alukongo          #+#    #+#             */
/*   Updated: 2022/11/13 20:09:02 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Animal.hpp"

// A_Animal::A_Animal(){
// 	std::cout << "A_Animal default constructor has been called" << std::endl;
// 	_type = "A_Animal";
// }

// A_Animal::A_Animal(std::string n){
// 	std::cout << "A_Animal constructor has been called" << std::endl;
// 	_type = "A_Animal";
// }

// A_Animal::A_Animal(const A_Animal & ins)
// {
// 	std::cout << "A_Animal copy constructor has been called" << std::endl;
// 	*this = ins;
// }

// A_Animal & A_Animal::operator=(const A_Animal & ins)
// {
// 	std::cout << "A_Animal assign constructor has been called" << std::endl;
// 	if (this == &ins)
// 		return *this;
// 	_type = ins._type;
// 	return *this;
// }

// A_Animal::~A_Animal(){
// 	std::cout << "A_Animal destructor has been called" << std::endl;
// }

// void A_Animal::makeSound() const{
// 	std::cout << "A_Animal have no song"<< std::endl << std::endl;
// }

std::string A_Animal::getType(){
	return(_type);
}

const std::string & A_Animal::getType() const{
	return(_type);
}