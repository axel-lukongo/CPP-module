#ifndef INTERN_H
#define INTERN_H

#include <iostream>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
private:
	/* data */
public:
	Intern();
	Intern(Intern & ins);
	Intern & operator=(Intern & ins);
	~Intern();

	Form* makeForm(std::string , std::string);
};



#endif // !INTERN_H