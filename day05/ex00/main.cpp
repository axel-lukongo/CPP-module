/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 21:35:22 by alukongo          #+#    #+#             */
/*   Updated: 2022/12/02 13:29:05 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"

int main(){
	try{
		Bureaucrat t1("johnson", -1);
	}
	catch(const std::exception& e){
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	std::cout << std::endl;
	try{
		Bureaucrat t1("RAZMO", 150);
		t1.increment();
		std::cout << t1 << std::endl;
	}
	catch(const std::exception& e){
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	std::cout << std::endl;

	try{
		Bureaucrat t1("jefry", 23);
		std::cout << t1 << std::endl;
	}
	catch(const std::exception& e){
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;
	std::cout << std::endl;
	try
	{
		Bureaucrat boby("boby", 150);
		std::cout << boby << std::endl;
		boby.increment();
		std::cout << boby << std::endl;
		boby.decrement();
		std::cout << boby << std::endl;
		boby.increment();
		std::cout << boby << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
