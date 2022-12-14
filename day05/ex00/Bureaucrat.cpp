/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alukongo <alukongo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 21:35:28 by alukongo          #+#    #+#             */
/*   Updated: 2022/12/06 13:11:52 by alukongo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Bureaucrat.hpp"


Bureaucrat::Bureaucrat(/* args */)
{
	std::cout << "Default constructor has been called" << std::endl;
}
Bureaucrat::Bureaucrat(std::string name,int grade):_name(name){
	std::cout << "constructor has been called" << std::endl;
		if (grade < 1)
			throw GradeTooHighException();
		else if (grade > 150)
			throw GradeTooLowException();
		else
			_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat & ins){
	std::cout << "Copy constructor has been called" << std::endl;
	*this = ins;
}
Bureaucrat& Bureaucrat::operator =(const Bureaucrat & ins){
	std::cout << "assign constructor has been called" << std::endl;
	_grade = ins._grade;
	return *this;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "destructor has been called" << std::endl;
}

void Bureaucrat::increment(){
	if (_grade > 1)
		_grade -= 1;
	else
		throw GradeTooHighException();
}

void Bureaucrat::decrement(){
	if (_grade < 150)
		_grade += 1;
	else
		throw GradeTooLowException();
}

int Bureaucrat::get_grade() const {
	return _grade;
}

std::string Bureaucrat::get_name() const{
	return _name;
}

std::ostream & operator << (std::ostream & out, const Bureaucrat &in){
	out << in.get_name() << " grade is " << in.get_grade() << std::endl;
	return out;
}
