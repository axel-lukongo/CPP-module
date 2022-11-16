/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 21:35:22 by alukongo          #+#    #+#             */
/*   Updated: 2022/11/16 12:31:48 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"
#include"Form.hpp"

int main(){
	
	std::cout << std::endl;
	try
	{
		Bureaucrat perso1("jefrey", 25);
		Form mandat("mandat", 24, 24);
		mandat.beSigned(perso1);
		mandat.signForm();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;



	try
	{
		Bureaucrat perso2("jefrey", 25);
		Form mandat1("mandat", 24, 25);
		mandat1.beSigned(perso2);
		mandat1.signForm();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;



	try
	{
		Bureaucrat perso3("jefrey", 25);
		Form mandat2("mandat", 24, 151);
		mandat2.beSigned(perso3);
		mandat2.signForm();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;

}