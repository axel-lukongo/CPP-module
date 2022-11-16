#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm():Form("Robotomy", 45, 72)
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string name): Form(name, 45, 72){
	std::cout << "Robotomy constructor" << std::endl;
	_target = name;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & in):Form(in){
	std::cout << "Robotomy copy constructor" << std::endl;
	*this = in;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &in){
std::cout << "Robotomy assign constructor" << std::endl;
return *this;
}


RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Robotomy destructor" << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor)const{
	if (this->isSign() &&  executor.get_grade() < this->get_grade_exec()){
		std::cout << "bzzzzzzz" << std::endl << std::endl;
		srand(time(NULL));
		int ran = rand() % 2;
		if(ran == 0)
			std::cout << _target <<" has been succesfuly robotomis"  << std::endl<< std::endl;
		else
			std::cout << "robotomis failled" << std::endl<< std::endl;
	}
	else
		throw Bureaucrat::GradeTooLowException();
}
