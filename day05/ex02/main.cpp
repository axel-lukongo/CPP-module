/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 21:35:22 by alukongo          #+#    #+#             */
/*   Updated: 2022/11/16 19:21:32 by alukongo         ###   ########.fr       */
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
		Bureaucrat perso("OBI_one", 24);
		ShrubberyCreationForm file1("jefrey");
		file1.beSigned(perso);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}