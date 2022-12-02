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

Form* Intern::makeForm(std::string name_Form, std::string target_Form){
	std::string name[] = {std::string("shrubbery creation"), std::string("robotomy request"),
	std::string("presidential pardon")};
	Form * action[] = {new ShrubberyCreationForm(target_Form), new RobotomyRequestForm(target_Form),
	new presidentialpardonForm(target_Form), 
	};
	for (int i = 0; i < 3; ++i)
	{
		if (name[i] == name_Form)
		{
			std::cout << "\033[1;32mIntern creates " << name[i] <<"\033[0m"<< std::endl;
			if (i != 2)
				delete action[2];
			return action[i];
		}
		delete action[i];
	}
	std::cout << name_Form << " doesn't exist" << std::endl << std::endl;
	throw Bureaucrat::GradeTooLowException();
	return NULL;
}
