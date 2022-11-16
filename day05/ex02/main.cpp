/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 21:35:22 by alukongo          #+#    #+#             */
/*   Updated: 2022/11/16 20:16:07 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"
#include"Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(){
	try
	{
		Bureaucrat perso("JEFREY", 120);
		ShrubberyCreationForm file1("GARDEN");
		file1.beSigned(perso);
		file1.execute(perso);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat perso("ROBOCOP", 30);
		RobotomyRequestForm file1("GARAGE");
		file1.beSigned(perso);
		file1.execute(perso);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat perso("HOLLAND", 2);
		presidentialpardonForm file1("CONSTITUTION");
		file1.beSigned(perso);
		file1.execute(perso);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl << std::endl << std::endl;
	//HERE I START THE WRONG TESTES
	try
	{
		Bureaucrat perso("OBI_one", 149);
		ShrubberyCreationForm file1("Jefrey");
		file1.beSigned(perso);
		file1.execute(perso);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat perso("OBI_one", 149);
		presidentialpardonForm file1("Kim Jong-un");
		file1.beSigned(perso);
		file1.execute(perso);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat perso("OBI_one", 149);
		RobotomyRequestForm file1("robocop");
		file1.beSigned(perso);
		file1.execute(perso);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
