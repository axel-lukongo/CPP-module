#ifndef FORM_H
#define FORM_H

#include <iostream>
#include"Bureaucrat.hpp"
#include <fstream>

class Bureaucrat;
class Form
{
private:
	const std::string _name;
	int const _grade_sign;
	int const _grade_exec;
	bool _is_signe;

public:
	// Form();
	Form(std::string , int exec, int sign);
	virtual void execute(Bureaucrat const & executor) const = 0;
	void	execute2( Bureaucrat const &executor );
	Form(const Form & ins);
	Form& operator =(const Form & ins);
	virtual ~Form();
	int get_grade_exec() const;
	int get_grade_sign() const;
	std::string get_name() const;
	void beSigned(Bureaucrat const &bu1);
	// void signForm();
	bool isSign() const;
};

std::ostream & operator << (std::ostream & out, const Form &in);



#endif // !FORM_H