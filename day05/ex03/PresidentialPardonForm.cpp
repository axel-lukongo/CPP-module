#include "PresidentialPardonForm.hpp"

presidentialpardonForm::presidentialpardonForm():Form("presidential", 5, 25)
{
}

presidentialpardonForm::presidentialpardonForm(std::string name): Form(name, 5, 25){
	std::cout << "presidential constructor" << std::endl;
	_target = name;
}

presidentialpardonForm::presidentialpardonForm(const presidentialpardonForm &in):Form(in){
	std::cout << "presidential copy constructor" << std::endl;
	*this = in;
}

presidentialpardonForm & presidentialpardonForm::operator=(const presidentialpardonForm &in){
std::cout << "presidential assign constructor" << std::endl;
_target = in._target;
return *this;
}


presidentialpardonForm::~presidentialpardonForm()
{
	std::cout << "presidential destructor" << std::endl;
}

void presidentialpardonForm::execute(Bureaucrat const & executor)const{
	if (this->isSign() &&  executor.get_grade() < this->get_grade_exec()){
		std::cout<< std::endl << executor.get_name() << " execute " << this->_target << std::endl;
		std::cout << "\033[1;32m"<<_target <<" is to forgive by Zaphod Beeblebrox\033[0m"  << std::endl<< std::endl;
		// std:: cout << _target<<" is to forgive by Zaphod Beeblebrox" << std::endl << std::endl;
	}
	else
		throw Bureaucrat::GradeTooLowException();
}