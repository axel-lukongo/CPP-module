/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 21:35:28 by alukongo          #+#    #+#             */
/*   Updated: 2022/11/14 21:53:16 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"


Bureaucrat::Bureaucrat(/* args */)
{
	std::cout << "Default constructor has been called" << std::endl;
}
Bureaucrat::Bureaucrat(std::string name,int grade): _grade(grade), _name(name){
	std::cout << "constructor has been called" << std::endl;
}
Bureaucrat::Bureaucrat(const Bureaucrat & ins){
	std::cout << "Copy constructor has been called" << std::endl;
	*this = ins;
}
Bureaucrat& Bureaucrat::operator =(const Bureaucrat & ins){
	std::cout << "assign constructor has been called" << std::endl;
	*this = ins;
	return *this;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "assign constructor has been called" << std::endl;
}
