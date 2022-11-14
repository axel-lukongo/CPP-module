#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H
#include <iostream>

class Bureaucrat
{
private:
	std::string const _name;
	int _grade;
	Bureaucrat();
public:
	Bureaucrat(std::string , int );
	Bureaucrat(const Bureaucrat & ins);
	Bureaucrat& operator =(const Bureaucrat & ins);
	~Bureaucrat();
};


#endif // !BUREAUCRAT_H