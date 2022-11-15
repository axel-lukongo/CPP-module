/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 21:35:22 by alukongo          #+#    #+#             */
/*   Updated: 2022/11/15 15:04:45 by alukongo         ###   ########.fr       */
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

	try{
		Bureaucrat t1("RAZMO", 150);
		t1.increment();
		std::cout << t1 << std::endl;
	}
	catch(const std::exception& e){
		std::cerr << e.what() << '\n';
	}

	try{
		Bureaucrat t1("jefry", 23);
		std::cout << t1 << std::endl;
	}
	catch(const std::exception& e){
		std::cerr << e.what() << '\n';
	}
	
	Bureaucrat boby("boby", 150);
	boby.decrement();
	std::cout << boby << std::endl;

	boby.increment();
	std::cout << boby << std::endl;
	
	
	try{
		boby.increment();
	}
	catch(const std::exception& e){
		std::cerr << e.what() << '\n';
	}
	std::cout << boby << std::endl;
}