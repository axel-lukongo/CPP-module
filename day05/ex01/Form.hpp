#ifndef FORM_H
#define FORM_H

#include <iostream>
#include"Bureaucrat.hpp"

class Form
{
private:
	const std::string _name;
	const int _grade_sign;
	const int _grade_exec;
	bool _is_signe;
	Form();
public:
	Form(std::string , int , int);
	Form(const Form & ins);
	Form& operator =(const Form & ins);
	~Form();
	int get_grade_exec() const;
	int get_grade_sign() const;
	std::string get_name() const;
	void beSigned(Bureaucrat &bu1);
	void signForm();
};

std::ostream & operator << (std::ostream & out, const Form &in);



#endif // !FORM_H