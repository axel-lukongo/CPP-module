#ifndef CONVERT_H
#define CONVERT_H
#include<iostream>
#include <string>
#include <cstring>
#include <exception>
#include <cmath>
#include<limits>

class converter
{
private:
	const std::string _str;
public:
	converter(char *str);
	~converter();
	void is_char();
	void is_int();
	void is_float();
	void is_double();
	void typeconverter();
};


#endif // !CONVERT_H