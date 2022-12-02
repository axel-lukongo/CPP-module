/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 21:35:22 by alukongo          #+#    #+#             */
/*   Updated: 2022/12/02 17:46:23 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"
#include"Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main(){
	try
	{
	std::cout << "\033[1;33m-----------------------robotomy-------------------- \033[0m"<<std::endl;
		Intern  someRandomIntern;
		Form*   rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		Bureaucrat perso1("DESTRO", 5);
		rrf->beSigned(perso1);
		rrf->execute(perso1);
		delete rrf;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	std::cout << std::endl;
	try
	{
	std::cout << "\033[1;33m-----------------------Shrubbery-------------------- \033[0m"<<std::endl;
		Intern  someRandomIntern;
		Form*   rrf;
		rrf = someRandomIntern.makeForm("shrubbery creation", "garden");
		Bureaucrat perso1("JEFREY", 2);
		rrf->beSigned(perso1);
		rrf->execute(perso1);
		delete rrf;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	std::cout << std::endl;
	try
	{
	std::cout << "\033[1;33m-----------------------presidential-------------------- \033[0m"<<std::endl;
		Intern  someRandomIntern;
		Form*   rrf;
		rrf = someRandomIntern.makeForm("presidential pardon", "the prisoner");
		Bureaucrat perso1("JEFREY", 1);
		perso1.signForm(*rrf);
		rrf->beSigned(perso1);
		rrf->execute(perso1);
		delete rrf;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
		std::cout << std::endl;
	std::cout << std::endl;
	try
	{
		std::cout << "\033[1;33m-----------------------Wrong test-------------------- \033[0m"<<std::endl;
		Intern  someRandomIntern;
		Form*   rrf;
		rrf = someRandomIntern.makeForm("presidential pardon", "the prisoner");
		Bureaucrat perso1("JEFREY", 80);
		perso1.signForm(*rrf);
		rrf->beSigned(perso1);
		rrf->execute(perso1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
