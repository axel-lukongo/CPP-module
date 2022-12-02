#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "intern constructor" << std::endl;
}

Intern::Intern(Intern & ins){
	*this = ins;
}
Intern & Intern::operator=(Intern & ins){
	(void) ins;
	return *this;
}


Intern::~Intern()
{
	std::cout << "intern destructor has been called" << std::endl;
}

int find_action(std::string name_form){
	if (name_form == "shrubbery creation")
		return(0);
	else if (name_form == "robotomy request")
		return (1);
	else if (name_form == "presidential pardon")
		return (2);
	else
		return (3);
}

Form* Intern::makeForm(std::string name_Form, std::string target_Form){
	int i = find_action(name_Form);
	switch (i)
	{
	case 0:
		return(new ShrubberyCreationForm(target_Form));
	case 1:
		return (new RobotomyRequestForm(target_Form));
	case 2:
		return (new presidentialpardonForm(target_Form));
	}
	std::cout << name_Form << " doesn't exist" << std::endl << std::endl;
	throw Bureaucrat::GradeTooLowException();
	return NULL;
}
