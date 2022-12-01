/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 21:35:22 by alukongo          #+#    #+#             */
/*   Updated: 2022/12/01 13:36:29 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"
#include"Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main(){
	// try
	// {
	// 	Intern  someRandomIntern;
	// 	Form*   rrf;
	// 	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	// 	Bureaucrat perso1("DESTRO", 45);
	// 	rrf->beSigned(perso1);
	// 	rrf->execute(perso1);
	// 	delete rrf;
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
	std::cout << std::endl;
	std::cout << std::endl;
	try
	{
		Intern  someRandomIntern;
		Form*   rrf;
		rrf = someRandomIntern.makeForm("shrubbery creation", "garden");
		Bureaucrat perso1("JEFREY", 2);
		rrf->beSigned(perso1);
		rrf->execute(perso1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	// std::cout << std::endl;
	// std::cout << std::endl;
	// try
	// {
	// 	Intern  someRandomIntern;
	// 	Form*   rrf;
	// 	rrf = someRandomIntern.makeForm("shru tion", "garden");
	// 	Bureaucrat perso1("JEFREY", 45);
	// 	rrf->beSigned(perso1);
	// 	rrf->execute(perso1);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
}
