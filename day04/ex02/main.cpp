/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 21:38:33 by alukongo          #+#    #+#             */
/*   Updated: 2022/11/14 20:33:58 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include"Brain.hpp"

int main()
{
	Cat cat1;
	Cat cat2(cat1);
	std::cout << cat1.getBrain() << std::endl << std::endl;
	std::cout << cat2.getBrain() << std::endl << std::endl;
	
	Dog Dog1;
	Dog Dog2(Dog1);
	std::cout << Dog1.getBrain() << std::endl << std::endl;
	std::cout << Dog2.getBrain() << std::endl << std::endl;
	return(1);
}

