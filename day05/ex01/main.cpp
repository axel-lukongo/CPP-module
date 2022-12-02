/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 21:35:22 by alukongo          #+#    #+#             */
/*   Updated: 2022/12/02 14:10:41 by alukongo         ###   ########.fr       */
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
		perso1.signForm(mandat);
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
		perso2.signForm(mandat1);
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
		perso3.signForm(mandat2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;

}