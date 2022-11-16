#ifndef SHRUBBERYCREATION_H
#define SHRUBBERYCREATION_H
#include <iostream>
#include "Form.hpp"

class ShrubberyCreationForm: public Form
{
private:
	std::string _target;
	
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string);
	ShrubberyCreationForm(const  ShrubberyCreationForm &in);
	ShrubberyCreationForm & operator=(const  ShrubberyCreationForm &in);
	virtual ~ShrubberyCreationForm();
	void execute(Bureaucrat const & executor) const;
};


#endif // !SHRUBBERYCREATION_H