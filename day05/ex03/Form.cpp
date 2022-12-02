#include "Form.hpp"

// Form::Form(){

// }

Form::Form(std::string name, int grade_exec, int grade_sign):
_name(name), _grade_sign(grade_sign), _grade_exec(grade_exec),_is_signe(false){
	std::cout << "constructor has been called" << std::endl;

		if (grade_exec < 1 || grade_sign < 1)
			throw Bureaucrat::GradeTooHighException();
		else if (grade_exec > 150 || grade_sign > 150)
			throw Bureaucrat::GradeTooLowException();
}

Form::Form(const Form & ins):
_name(ins._name), _grade_sign(ins._grade_sign), _grade_exec(ins._grade_exec){
	std::cout << "Copy constructor has been called" << std::endl;
	*this = ins;
}


Form& Form::operator =(const Form & ins){
	std::cout << "assign constructor has been called" << std::endl;
	_is_signe = ins._is_signe;
	return *this;
}

Form::~Form()
{
	std::cout << "destructor has been called" << std::endl;
}

int Form::get_grade_exec() const{
	return _grade_exec;
}
int Form::get_grade_sign() const{
	return _grade_sign;
}
std::string Form::get_name() const{
	return _name;
}

bool Form::isSign() const{
	return _is_signe;
}



std::ostream & operator << (std::ostream & out, const Form &in){
	out << in.get_name() << " rank required to exec " << in.get_grade_exec() << std::endl;
	out << in.get_name() << " rank required to sign " << in.get_grade_sign() << std::endl;
	return out;
}

void Form::beSigned(Bureaucrat const & bu1){
	if (_grade_sign >= bu1.get_grade()){
		_is_signe = true;
		std::cout <<"\033[1;32m" <<bu1.get_name()<< " signed\033[0m" << std::endl;
	}
	else
		throw Bureaucrat::GradeTooLowException();
}

// void Form::signForm(){
// 	if (_is_signe == true)
// 		std::cout <<"\033[1;31m" <<_name<< " signed the form\033[0m" << std::endl;
// 	else
// 		std::cout <<"\033[1;31m" <<_name<< " couldn't signed signe the form\033[0m" << std::endl;
// }
