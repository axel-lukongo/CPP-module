/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 21:10:33 by alukongo          #+#    #+#             */
/*   Updated: 2022/12/07 17:37:52 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void): _size_max(0), _my_vector(0){
	
}


Span::Span(unsigned int N): _size_max(N), _my_vector(0)
{
	_my_vector.reserve(N);
	std::cout << "constructor has been called" <<std::endl;
}

Span::Span(Span const & ins){
	*this = ins;
	std::cout << "copy constructor has been called" << std::endl;
}

Span& Span::operator=(Span const & ins){
	_size_max = ins._size_max;
	_my_vector = ins._my_vector;
	// *this = ins;
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
	std::cout << "We add: " << num << std::endl;
}

int Span::shortestSpan(){
	if (_my_vector.size() <= 1)
		throw std::exception();
	std::sort(_my_vector.begin(), _my_vector.end());
	std::vector<int>::iterator it;
	int val = 0;
	int ret = *(_my_vector.end()-1);
	for (it = _my_vector.begin(); it != _my_vector.end(); it++){
		if(it != _my_vector.end() && (*it - val) < ret)
			ret = *it - val;
		val = *it;
	}
	return ret;
}

int Span::longestSpan(){
	if (_my_vector.size() <= 1)
		throw std::exception();
	std::sort(_my_vector.begin(), _my_vector.end());
	return (_my_vector[_my_vector.size()-1] - _my_vector[0]);
}

void Span::print_vec(){
	std::vector<int>::iterator it;
	if (_my_vector.size() <= 1)
		std::cout << "the vector doesn't have enought element" << std::endl;
	else{
		std::cout << "numbers: ";
		for(it = _my_vector.begin(); it != _my_vector.end(); it++){
			std::cout << "|";
			std::cout << *it << " ";
		}
	}
	std::cout << std::endl;
}
