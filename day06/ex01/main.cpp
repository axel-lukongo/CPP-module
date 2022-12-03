/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 15:35:37 by alukongo          #+#    #+#             */
/*   Updated: 2022/12/03 23:26:55 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Data.hpp"

uintptr_t serialize(Data* ptr){
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw){
	return reinterpret_cast<Data *> (raw);
}

int main(){
	Data *ptr;
	uintptr_t raw;

	ptr = new Data;
	ptr->test = 10;

	raw = serialize(ptr);
	std::cout << raw << std::endl;
	
	ptr = deserialize(raw);
	std::cout << ptr->test << std::endl;

	delete ptr;
}