/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 21:10:33 by alukongo          #+#    #+#             */
/*   Updated: 2022/11/28 21:55:59 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void){
	
}


Span::Span(unsigned int N): _size_max(N), _my_vector(0)
{
	_my_vector.reserve(N);
	std::cout << "constructor has been called" <<std::endl;
}

Span::Span(Span & ins){
	*this = ins;
	std::cout << "copy constructor has been called" << std::endl;
}

Span& Span::operator=(Span & ins){
	_size_max = ins._size_max;
	_my_vector = ins._my_vector;
	*this = ins;
	return *this;
	std::cout << "copy constructor has been called" << std::endl;
}


Span::~Span()
{
	
}



void Span::addNumber(int num){
	if (_my_vector.size() < _size_max){
		_my_vector.push_back(num);
	}
	else
		throw std::exception();
	std::cout << "addNumber has been called" << std::endl;
}

void Span::shortestSpan(){
	
}

void Span::longestSpan(){
	
}