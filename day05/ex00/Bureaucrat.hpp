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
	int get_grade() const;
	std::string get_name() const;
	void increment();
	void decrement();

	class Too_High : public std::exception{
		public:
			virtual const char * what() const throw(){
				return "Grade too hight";
			}
	};
	class Too_low : public std::exception{
		public:
			virtual const char * what() const throw(){
				return "Grade too low";
			}
	};
};

std::ostream & operator << (std::ostream & out, const Bureaucrat &in);


#endif // !BUREAUCRAT_H