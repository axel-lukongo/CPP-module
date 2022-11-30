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

A_Animal::A_Animal()
{
   std::cout << "Default A_Animal constructor called"  << std::endl;
   _type = "A_Animal";
}

A_Animal::A_Animal(A_Animal const &src)
{
   std::cout << "Copy A_Animal constructor called"  << std::endl;
   *this = src;
}

A_Animal::~A_Animal()
{
   std::cout << "A_Animal destructor called" << std::endl;
}

A_Animal &A_Animal::operator=(A_Animal const &src)
{
   std::cout << "A_Animal assignment operator called" << std::endl;
   _type = src._type;
   return *this;
}

std::string A_Animal::getType(){
	return(_type);
}

const std::string & A_Animal::getType() const{
	return(_type);
}