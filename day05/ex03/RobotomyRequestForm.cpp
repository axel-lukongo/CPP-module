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
_target = in._target;
return *this;
}


RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Robotomy destructor" << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor)const{
	if (this->isSign() &&  executor.get_grade() < this->get_grade_exec()){
		std::cout<< std::endl << executor.get_name() << " execute " << this->_target << std::endl;
		std::cout << "bzzzzzzz" << std::endl << std::endl;
		srand(time(NULL));
		int ran = rand() % 2;
		if(ran == 0)
			std::cout << "\033[1;32m"<<_target <<" has been succesfuly robotomis\033[0m"  << std::endl<< std::endl;
		else
			std::cout << "\033[1;31mrobotomis failled\033[0m" << std::endl<< std::endl;
	}
	else
		throw Bureaucrat::GradeTooLowException();
}
