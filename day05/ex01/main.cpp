/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 21:35:22 by alukongo          #+#    #+#             */
/*   Updated: 2022/11/16 01:48:38 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"
#include"Form.hpp"

int main(){
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
	
}