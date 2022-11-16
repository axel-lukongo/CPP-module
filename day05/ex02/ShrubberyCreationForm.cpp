#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm():Form("shrubbery", 137, 145)
{
	std::cout << "shrubbery default constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name): Form(name, 137, 145){
	std::cout << "shrubbery constructor" << std::endl;
	_target = name;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &in):Form(in){
	std::cout << "shrubbery copy constructor" << std::endl;
	*this = in;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &in){
std::cout << "shrubbery assign constructor" << std::endl;
return *this;
}


ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "shrubbery destructor" << std::endl;
}








void ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
	if (this->isSign() &&  executor.get_grade() < this->get_grade_exec()){
		std::ofstream file(_target.substr(0, _target.size()).append("_Shrubbery"));
		if(file.is_open()){
			file <<  "           {{ }{\n"
						"          {{}}}{{\n"
						"        {{}}{}}\n"
						"           }}}}{\n"
						"          {{}}}\n"
						"         }{{}{}}\n"
						"           {{}{}}\n"
						"         }}{{}}\n"
						"          {{}}{{\n"
						"           \\  /\n"
						"        .-''| |``-.\n"
						"       '-._/_o_\\_.-'\n"
						"        `._     _.'\n"
						"         | :OOO: |\n"
						"         `._    .'\n"
						"            `--'" << std::endl;
		}
		else
			std::cout << "cannot open this file" << std::endl << std::endl;
	}
	else
		throw Bureaucrat::GradeTooLowException();
}

